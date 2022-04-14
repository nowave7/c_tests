#include <stdio.h>

int x; 
int modifyvalue() 
{ 
    return(x+=10); 
}
int changevalue(int x) 
{ 
    return(x+=1); 
}
void fun1(auto int _)
{
	printf("%d\n",_);
}

void main()
{ 
    int x=10; 
    x++; 
    changevalue(x); 
    x++; 
    modifyvalue(); 
    printf("First output:%d\n",x);
    x++; 
    changevalue(x); 
    printf("Second output:%d\n",x); 
    modifyvalue(); 
    printf("Third output:%d\n",x);

    	int i;
	i=1;
	i=i+2*i++;
	printf("%d\n",i);

	int a;
	a=453<<64;
	printf("%d\n",a);

	i=10;
	printf("%d %d %d\n",++i, i++, ++i);

	char arr[11]="The African Queen";
	printf("%s\n",arr);

	   x=10; int y=15;
    x = x++;
    y = ++y;
    printf("%d %d\n",x,y);

    	float ax;
	ax=6.7;
	if(ax==6.7)
	printf("A\n");
	else
	printf("B\n");

	printf("%d %d ",47%5,47%-5);
	printf("%d %d %d\n",-47%5,-47%-5,5%7);
	a=3.5;
	printf("%d\n",a);
	fun1(23);
}

