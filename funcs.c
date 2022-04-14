#include <stdio.h>
#include <stdlib.h>

#define MAX_INFO_LENGTH 64

#define SIZEOF(x) (sizeof(x)/sizeof(x[0]))

typedef unsigned char       BYTE;

static BYTE AllenCharacterReplacementTable[][2][MAX_INFO_LENGTH] =
{
    {{0x3D, 0x00},   "\\<UNIC(0x3D)>"},     //>  =
    {{0x21, 0x00},   "\\<UNIC(0x21)>"},     //>  !
    {{0x22, 0x00},   "\\<UNIC(0x22)>"},     //>  "
    {{0x23, 0x00},   "\\<UNIC(0x23)>"},     //>  #
    {{0x24, 0x00},   "\\<UNIC(0x24)>"},     //>  $
    {{0x25, 0x00},   "\\<UNIC(0x25)>"},     //>  %
    {{0x26, 0x00},   "\\<UNIC(0x26)>"},     //>  &
    {{0x27, 0x00},   "\\<UNIC(0x27)>"},     //>  '
    {{0x2A, 0x00},   "\\<UNIC(0x2A)>"},     //>  *
    {{0x2B, 0x00},   "\\<UNIC(0x2B)>"},     //>  +
    {{0x2C, 0x00},   "\\<UNIC(0x2C)>"},     //>  ,
    {{0x2D, 0x00},   "\\<UNIC(0x2D)>"},     //>  -
    {{0x2E, 0x00},   "\\<UNIC(0x2E)>"},     //>  .
    {{0x2F, 0x00},   "\\<UNIC(0x2F)>"},     //>  /
    {{0x3A, 0x00},   "\\<UNIC(0x3A)>"},     //>  :
    {{0x3B, 0x00},   "\\<UNIC(0x2B)>"},     //>  ;
    {{0x3C, 0x00},   "\\<UNIC(0x3C)>"},     //>  <
    {{0x3E, 0x00},   "\\<UNIC(0x3E)>"},     //>  >
    {{0x3F, 0x00},   "\\<UNIC(0x3F)>"},     //>  ?
    {{0x80, 0x00},   "\\<UNIC(0x20AC)>"},   //>  Euro
};

int (*function)(int, int);
typedef int CallBack(int, int);
void SymbolsTranslate();

int add(int a, int b);
CallBack subtract;

int main()
{
    int result = 0;

    function = add;

    result = function(1, 2);
    printf("result: %d\n", result);

    result = subtract(1, 2);
    printf("result: %d\n", result);

    SymbolsTranslate();

    return 0;
}

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

void SymbolsTranslate()
{
    for (int j = 0; j < SIZEOF(AllenCharacterReplacementTable); j++)
    {
        printf("%d: %s\n", j, AllenCharacterReplacementTable[j][0]);
    }
}
