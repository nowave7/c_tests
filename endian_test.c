#include <stdio.h>


unsigned int ChangeEndianness(unsigned int value);

int main(void) {                                                                                                                              
  union {
    unsigned int word;  // a 32-bit integer
    unsigned char bytes[4];
  } u;
                                                                                                                                      
  u.word = 0x0A0B0C0D;
  for (int i = 0; i < 4; i++) {
    printf("byte[%d] = 0x%x\n", i, (int)u.bytes[i]);
  }
  
  printf("\n");

  u.word = ChangeEndianness(u.word);

   for (int i = 0; i < 4; i++) {
    printf("byte[%d] = 0x%x\n", i, (int)u.bytes[i]);
  }


}


unsigned int ChangeEndianness(unsigned int value)
{
    unsigned int result = 0;
    result |= (value & 0x000000FF) << 24;
    result |= (value & 0x0000FF00) << 8;
    result |= (value & 0x00FF0000) >> 8;
    result |= (value & 0xFF000000) >> 24;
    return result;
}
