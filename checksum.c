#include <stdio.h>
#include <stdlib.h>

void main()
{
    int calculated_checksum=0;
    int hum_temp = 42795227;
	calculated_checksum = ((hum_temp&0xFF000000)>>24)+
						  ((hum_temp&0x00FF0000)>>16)+
						  ((hum_temp&0x0000FF00)>>8)+
						  ((hum_temp&0x000000FF));

    printf("Calculated checksum: 0x%x\n", calculated_checksum);
}
