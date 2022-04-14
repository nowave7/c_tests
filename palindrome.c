#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

void strlwr(char *str)
{
	char p = str[0];
	int i=0;

	while(p!='\0')
	{
		str[i]=(char)tolower(p);
		i++;
		p=str[i];
	}
}

int is_palindrome(char *str)
{
	char *strLwrRev;
	strLwrRev = (char*)malloc(strlen(str));

	strlwr(str);
	strcpy(strLwrRev, str);
	strLwrRev = strrev(strLwrRev);

	if (!strcmp(strLwrRev, str))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

#ifndef RunTests
int main(int argc, char *argv[])
{
    char *str;
    str = (char*)malloc(strlen(argv[1]));
    strcpy(str, argv[1]);

    printf("%d\n", is_palindrome(str));
}
#endif
