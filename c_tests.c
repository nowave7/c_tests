#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

typedef char (*(*arrfptr[3])())[10];

int test1();
int test2();
int test3();
int test4();
int test5();
int test6();
int test7();
int test8();
int test9();
int test10();
int test11();
int test12();
int test13();
int test14();
int test15();
int test16();
int test17();
int test18();
int test19();
int test20();
int test21();
int test22();
int test23();
int test24();
int test25();
int test26();
int test27();
int test28();
int test29();
int test30();
int test31();
int test32();
int test33();
int test34();
int test35();
int test36();
int test37();
int test38();
int test39();
int test40();
int test41();
int test42();
int test43();
int test44();
int test45();
int test46();
int test47();
int test48();
int test49();
int test50();
int test51();
int test52();
int test53();
int test54();
int test55();
int test56();
int test57();
int test58();
int test59();
int test60();
int test61();
int test62();
int test63();
int test64();
int test65();
int test67(int n);
int test68();
int test69();
int test70();
int test71();
int getRegisterPart(int registerQuantity);

int PI = 3.14;

int main(int argc, char *argv[])
{
	int option, i=0, n=0;

    while (i<argc)
	{
		option = atoi(argv[i]);
		switch(option)
		{
			case 1:
			test1();
			printf("\n");
			break;
			case 2:
			test2();
			printf("\n");
			break;
			case 3:
			test3();
			printf("\n");
			break;
			case 4:
			test4();
			printf("\n");
			printf("%d",PI);
			printf("\n");
			break;
			case 5:
			test5();
			printf("\n");
			break;
			case 6:
			test6();
			printf("\n");
			break;
			case 7:
			test7();
			printf("\n");
			break;
			case 8:
			test8();
			printf("\n");
			break;
			case 9:
			test9();
			printf("\n");
			break;
			case 10:
			test10();
			printf("\n");
			break;
			case 11:
			test11();
			printf("\n");
			break;
			case 12:
			test12();
			printf("\n");
			break;
			case 13:
			test13();
			printf("\n");
			break;
			case 14:
			test14();
			printf("\n");
			break;
			case 15:
			test15();
			printf("\n");
			break;
			case 16:
			test16();
			printf("\n");
			break;
			case 17:
			test17();
			printf("\n");
			break;
			case 18:
			test18();
			printf("\n");
			break;
			case 19:
			test19();
			printf("\n");
			break;
			case 20:
			test20();
			printf("\n");
			break;
			case 21:
			test21();
			printf("\n");
			break;
			case 22:
			test22();
			printf("\n");
			break;
			case 23:
			test23();
			printf("\n");
			break;
			case 24:
			test24();
			printf("\n");
			break;
			case 25:
			test25();
			printf("\n");
			break;
			case 26:
			test26();
			printf("\n");
			break;
			case 27:
			test27();
			printf("\n");
			break;
			case 28:
			test28();
			printf("\n");
			break;
			case 29:
			test29();
			printf("\n");
			break;
			case 30:
			test30();
			printf("\n");
			break;
			case 31:
			test31();
			printf("\n");
			break;
			case 32:
			test32();
			printf("\n");
			break;
			case 33:
			test33();
			printf("\n");
			break;
			case 34:
			test34();
			printf("\n");
			break;
			case 35:
			test35();
			printf("\n");
			break;
			case 36:
			test36();
			printf("\n");
			break;
			case 37:
			test37();
			printf("\n");
			break;
			case 38:
			test38();
			printf("\n");
			break;
			case 39:
			test39();
			printf("\n");
			break;
			case 40:
			test40();
			printf("\n");
			break;
			case 41:
			test41();
			printf("\n");
			break;
			case 42:
			test42();
			printf("\n");
			break;
			case 43:
			test43();
			printf("\n");
			break;
			case 44:
			test44();
			printf("\n");
			break;
			case 45:
			test45();
			printf("\n");
			break;
			case 46:
			test46();
			printf("\n");
			break;
			case 47:
			test47();
			printf("\n");
			break;
			case 48:
			test48();
			printf("\n");
			break;
			case 49:
			test49();
			printf("\n");
			break;
			case 50:
			test50();
			printf("\n");
			break;
			case 51:
			test51();
			printf("\n");
			break;
			case 52:
			test52();
			printf("\n");
			break;
			case 53:
			test53();
			printf("\n");
			break;
			case 54:
			test54();
			printf("\n");
			break;
			case 55:
			test55();
			printf("\n");
			break;
			case 56:
			test56();
			printf("\n");
			break;
			case 57:
			test57();
			printf("\n");
			break;
			case 58:
			test58();
			printf("\n");
			break;
			case 59:
			test59();
			printf("\n");
			break;
			case 60:
			test60();
			printf("\n");
			break;
			case 61:
			test61();
			printf("\n");
			break;
			case 62:
			test62();
			printf("\n");
			break;
			case 63:
			test63();
			printf("\n");
			break;
			case 64:
			test64();
			printf("\n");
			break;
			case 65:
			test65();
			printf("\n");
			break;
			case 66:
			getRegisterPart(3);
			printf("\n");
			break;
			case 67:
			n = test67(10);
			printf("sum is: %d\n", n);
			break;
            case 68:
            test68();
            break;
			case 69:
            test69();
            break;
			case 70:
            test70();
            break;
			case 71:
            test71();
            break;
		}
		i++;
	}
}

int test1()
{
	char chr;
	chr = 128;
	printf("%d", chr);
	return 0;
}

int test2()
{
	int Volatile;// original test was without the declaration of x
	
	printf("Hello World! %d", Volatile);
	return 0;
}

int test3()
{
	int main = 3;
	printf("%d", main);
	return 0;
}

int test4()
{
	float x = 'a';
	printf("%f", x);
	return 0;
}

int test5()
{
	double f1 = 0.1;	//originally it was float
	if (f1 == 0.1)
		printf("equal\n");
	else
		printf("not equal\n");
}

int test6()
{ 
   int *p = NULL;
   // #undef NULL   //originally this line was uncommented
   if(p==NULL) printf("NULL"); 
   else printf("Nill");
}

int test7()
{
   int i;
   char s[] = "hello";

   for(i=0; s[i]; ++i);
      printf("%d ", i);

   i=0; 
   while(s[i++]);
      printf("%d ", i);
}

int test8() 
{
   //for()printf("Hello");
}

int test9() 
{
   unsigned x = 5, y=&x, *p = y+0; 

   printf("%u",*p);
}

void g(void) { 
	printf("1234");
}

int test10()
{ 
   void (*f)(void);
   f = g;
   f();
}

int test11()
{ 
   int x = 3;
   
   x += 2;
   x =+ 2;
   printf("%d", x); 
}

int test12()
{
   int x = 1;
   float y = x>>2;
   printf( "%f", y );
}

int test13()
{	
   fprintf(stdout,"Hello, World!");
}

int test14()
{
   printf("SomethING");
   //test14();		// originally was uncommented, results in an endless recursive call, which in the end results in a stack overflow and a segfault with core dump, applies even to the main function!
   return 0;
}

int test15()
{
   const int i = 0;
    
   //printf("%d\n", i++);		// cannot change const variables!!!
   return 0;
}

int test16()
{
   int x = 1;
   
   float y = x>>2;
   
   printf( "%f", y );
}

int test17()
{	
   fprintf(stdout,"Hello, World!");
}

int test18()
{
    //printf("%d%d", sizeof(NULL!), size of(" "));		//Error on NULL! and size of
}

int test19()
{
    int x=15;
    printf("\n%d,%d,%d", x!=15, x=20, x<30);
}

int i;
int test20()
{
    printf("%d", i);
}

int test21()		// the test says that 'a' should be printed, but under gcc it segfaults!
{
    char *p = "ayqm";
    printf ("%c", ++*(p++));
}

int test22()
{
	int x = 4+2%-8;
	printf("%d",x);
}

# define SQR(X) ((X)*(X))		// originally this was the macro # define SQR(X) (X*X)
int test23()
{
    int a, b = 3;
    a = SQR(b+2);
    printf("\n%d", a);
}

int test24()
{
	int i = 5;
	do {
		putchar(i+100); 
		printf("%d", i--);
	}
	while(i);
}

int test25()
{
	int i = 107, x = 5;
	printf((x > 7) ? "%d": "%c", i);
}

int test26()
{
    static int a[] = {7,8,9};
	printf("%d", 2[a] + a[2]);
}

int test27()
{
	printf("ab", "cd", "ef");
}

int test28()
{
	int x = 0;
	if(2 < 1);
	else
		x = (2 < 0) ? printf("one") : printf("fout");
	printf("%d", x);
}

int test29()
{
	for(i = getchar() ; ; i = getchar()) 
	{
		if(i=='x') {
			break;
		}
		else {
			putchar(i);
		}
	}
}

int find(int x, int y)
{
	return((x < y) ? 0 : (x - y));
}
	
int test30()
{
	int a=7, b=2;
	printf("%d\n",find(a, find(a,b)));
	printf("%d",find(a,b)+find(b, a));
}

int test31()
{
	int y =1;
	
	printf("%d\n",3*(y-8)/9);
	printf("%d",(y-8)/9*3);
}

int test32()
{
	int x, y = 2, z, a;
	x = (y*=2) + (z=a=y);
	printf("%d", x);
}

int test33()
{
	int a=9, b=5, c=3;
	printf("%d",(a - a/b * b%c) > a%b%c);
}

int test34()
{
	putchar(getchar());
	putchar(getchar());
}

int test35() 
{
    char c = 125;
	c = c+10;
	printf("%d", c);
}

int test36() 
{
    char *str = NULL;
    strcpy(str, "cquestionbank");
	printf("%s", str);
}

int test37()
{
	int i = 2;
	do
	{
		printf("Hi");
	}
	while (i < 2);
}

int test38()
{
	int x = 0;
	if (x == 1)
		if (x >= 0)
			printf("true\n");
		else
			printf("false\n");
}

int test39()
{
	double k = 0; 
	for (k = 0.0; k < 3.0; k++)
		printf("Hello");
}


#define true 1
int test40()
{
	if (true)
	{
		printf("true exists here!\n");
	}
}

int test41()
{
	int x = 0;
	if (x++)
		printf("true\n");
	else if (x == 1)
		printf("false\n");
}

int test42()
{
	int a = 1;
	if (a--)
		printf("True");
	if (a++)
		printf("False");
}

int test43()
{
    FILE *fs, *ft, *fp;
    fp = fopen("A.C", "r");
    fs = fopen("B.C", "r");
    ft = fopen("C.C", "r");
    fclose(/*fp, fs,*/ ft);
    return 0;
}

int test44()
{
    char *p;
    p="hello";
    printf("%s\n", *&*&p);
    return 0;
}


int test45()
{
    FILE *fs, *ft;
    char c[10];
    fs = fopen("source.txt", "r");
    c[0] = getc(fs);
    fseek(fs, 0, SEEK_END);
    fseek(fs, -3L, SEEK_CUR);
    fgets(c, 5, fs);
    puts(c);
    return 0;
}

void display(char *s, ...);
int fun1();
int fun2();

int test46()
{
    int (*p1)();
    int (*p2)();
    p1 = fun1;
    p2 = fun2;
    display("SomethING", p1, p2);
    return 0;
}
void display(char *s, ...)
{
    int (*pp1)();
    int (*pp2)();
    va_list ptr;

    va_start(ptr, s);
    pp1 = va_arg(ptr, int(*)());
    (*pp1)();

    pp2 = va_arg(ptr, int(*)());
    (*pp2)();

}
int fun1()
{
    printf("Hello");
}
int fun2()
{
    printf("Hi");
}

int test47()
{
    float d=2.25;
    printf("%e,", d);
    printf("%f,", d);
    printf("%g,", d);
    printf("%lf", d);
    return 0;
}

int test48()
{
	return 1;
	return 12;
}

void display49(int (*ff)());

int test49()
{
    int show49();
    int (*f)();
    f = show49;
    display49(f);
    return 0;
}
void display49(int (*ff)())
{
    (*ff)();
}
int show49()
{
    printf("IndiaBIX");
}

int test50()
{
    char str[]="C-program";
    int a = 5;
    printf(a >10?"Ps\n":"%s\n", str);
    return 0;
}


#define INFINITELOOP while(1)
int test51()
{
    INFINITELOOP
    printf("IndiaBIX");
    return 0;
}

int fun(int);
int test52()
{
    //float k=3.9999999;		this implicit conversion from float to int will round up the value to 4, if we delete one 9 at the end, it goes down to 5. investigate why!!!
	float k=3;					//implicit conversion from float to int
    fun(k=fun(fun(k)));
    printf("%f\n", k);
    return 0;
}
int fun(int i)
{
    i++;
    return i;
}

int test53()
{
    float d=2.25;
    printf("%e,", d);
    printf("%f,", d);
    printf("%g,", d);
    printf("%lf", d);
    return 0;
}

int test54()
{
    union a
    {
        int i;
        char ch[2];
    };
    union a u1 = {512};
    union a u2 = {0, 2};
    return 0;
}

int test55()
{
    int x=1, y=1;
    for(; y; printf("%d %d\n", x, y))
    {
        y = x++ <= 5;
    }
    printf("\n");
    return 0;
}

int test56()
{
    int arr[]={2, 3, 4, 1, 6};
    printf("%u, %u, %u\n", arr, &arr[0], &arr);
    return 0;
}

int test57()
{
    char str1[] = "Learn through SomethING\0.com",  str2[120];
    char *p;
    p = (char*) memccpy(str2, str1, 'i', strlen(str1));
    *p = '\0';
    printf("%s", str2);
    return 0;
}

int test58()
{
    int i, j;
    int (*p)[3];
	int (*p1)[3];
	int *p2[5];
	int arr[5] = {1, 2, 3, 4, 5};
    
	p = (int(*)[3])malloc(3*sizeof(*p));
	p1 = (void*)malloc(3*sizeof(int)); 	//p1 = &arr; // this would also work
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			p[i][j]= i+j;
			printf("%d", p[i][j]);
		}
	}
	printf("\n");
	for (i=0; i<3; i++)
	{
		*p1[i]=i;
		printf("%d ", *p1[i]);
	}
	printf("\n");
	for (i=0; i<5; i++)
	{
		p2[i] = &arr[i];
		printf("%d ", *p2[i]);
	}
    return 0;
}

int test59()
{
    float a=5.375;
    char *p;
    int i;
    p = (char*)&a;
    for(i=0; i<=3; i++)
        printf("%02x\n", (unsigned char)p[i]);		//00 00 AC 40
    return 0;
}

struct emp
{
    char name[20];
    int age;
};

void modify(struct emp*);

int test60()
{
    struct emp e = {"Tested", 35};
    modify(&e);
    printf("%s %d", e.name, e.age);
    return 0;
}
void modify(struct emp *p)
{
     p ->age=p->age+2;
}

int test61()
{
    int x=30, *y, *z, a, b;
    y=&x; /* Assume address of x is 500 and integer is 4 byte size */
    z=y;
	a = *z++;
	b = *y++;
    b=a;
    x++;
    printf("x=%d, &x=%0x y=%0x, z=%0x\n", x, &x, y, z);
    return 0;
}

int test62()
{
    unsigned int res;
    res = (64 >>(2+1-2)) & (~(1<<2));
    printf("%d\n", res);
    return 0;
}

#define P printf("%d\n", -1^~0);
#define M(P) int test63()\
             {\
                P\
                return 0;\
             }
M(P)

int sumdig(int);
int test64()
{
    int a, b;
    a = sumdig(123);
    b = sumdig(123);
    printf("%d, %d\n", a, b);
    return 0;
}

int sumdig(int n)
{
    int s, d;
    if(n!=0)
    {
        d = n%10;
        n = n/10;
        s = d+sumdig(n);
    }
    else
        return 0;
    return s;
}

void swap(char *, char *);
int test65()
{
    char *pstr[2] = {"Hello", "SomethING"};
    swap(pstr[0], pstr[1]);
    printf("%s\n%s", pstr[0], pstr[1]);
    return 0;
}

void swap(char *t1, char *t2)
{
    char *t;
    t=t1;
    t1=t2;
    t2=t;
}

int getRegisterPart(int registerQuantity)
{
	int length = 0;
	if (registerQuantity % 8 == 0)
	{
		length = registerQuantity / 8;
	}
	else
	{
		length = registerQuantity / 8 + 1;
	}

	printf("length:%d \n", length);
	return length;
}

int test67(int n)
{
	if (n>0)
	{
		return test67(--n)+n;
	}
	else
	{
		return n;
	}
	
}

int test68()
{
    char ReceiveBuffer[12345];

    printf("sizeof(ReceiveBuffer): %d", sizeof(ReceiveBuffer));
}

int test69()
{ 
   int *p = NULL;

   //#undef NULL 

   if(p==NULL) printf("NULL"); 

   else printf("Nill");

}

int test70()
{
   char *s = "Fine";
   *s = 'N';
   
   printf("%s", s);
}

int test71()
{
   char *s = "Hello";
   
   while(*s!=NULL)
   printf("%c", *s++);
}

