#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_INT_RANGE 4294967296

void itoa(int, int, char*);
void reverse_order(char*, int);

void itoa(int number, int base, char *destination)
{
	int temp2=0, counter=0;
	char temp1=0;
	do
	{
		temp1 = number%base;
		destination[counter] = temp1+48;
		temp2 = number/base;
		number = temp2;
		counter++;
	}
	while(temp2!=0);
	destination[counter]='\0';
	reverse_order(destination, strlen(destination));
}

void reverse_order(char *string, int length)
{
	int i = 0, counter1, counter2;
	counter1 = 0;
	counter2 = length-1;
	char temp1;
	while(counter1 < counter2)
	{
		temp1 = string[counter1];
		string[counter1] = string[counter2];
		string[counter2] = temp1;
		counter1++;
		counter2--;
	}
}

void main()
{
	char buffer[15]="";
	int counter = 0;

	while (1)
	{
		itoa(counter, 10, buffer);
		strcat(buffer, "\r\n\0");
		if (counter == MAX_INT_RANGE)
		{
			counter = 0;
		}
		else
		{
			counter++;
		}
		printf("%s",buffer);
	}
}
