#include <stdio.h>

//* this is the definition of the anonymous function */
#define lambda(l_ret_type, l_arguments, l_body)        \
  ({                                                   \
   l_ret_type l_anonymous_functions_name l_arguments   \
   l_body                                              \
   &l_anonymous_functions_name;                        \
   })

#define forEachInArray(fe_arrType, fe_arr, fe_fn_body)                                    \
{                                                                                         \
  int i=0;                                                                                \
  for(;i<sizeof(fe_arr)/sizeof(fe_arrType);i++) {  fe_arr[i] = fe_fn_body(&fe_arr[i]); }  \
}

typedef struct
{
  int a;
  int b;
} testtype;

void printout(const testtype * array)
{
  int i;
  for ( i = 0; i < 3; ++ i )
    printf("%d %d\n", array[i].a, array[i].b);
  printf("\n");
}

int main(void)
{
  testtype array[] = { {0,1}, {2,3}, {4,5} };

  printout(array);
  /* the anonymous function is given as function for the foreach */
  forEachInArray(testtype, array,
    lambda (testtype, (void *item),
    {
      int temp = (*( testtype *) item).a;
      (*( testtype *) item).a = (*( testtype *) item).b;
      (*( testtype *) item).b = temp;
      return (*( testtype *) item);
    }));
  printout(array);
  return 0;
}
