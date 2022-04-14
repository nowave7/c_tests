#include <stdlib.h>
#include <stdio.h>
#include <string.h>

u_int32_t data[32] = { 0, 0, 0, 0, 0, 0, 1, 0,
                      0, 1, 1, 0, 1, 1, 1, 1,
                      0, 0, 0, 0, 0, 0, 0, 0,
                      1, 1, 1, 1, 1, 0, 1, 0
                    };
u_int32_t buffer[4] = {0, 0, 0, 0};
u_int32_t hum_temp = 0x27300e4;

u_int32_t ParseAM2301Data (u_int32_t* data);

void main(void)
{
    int temp_hum = 0;
    char str[100];

    temp_hum = ParseAM2301Data(data);

    /*u_int32_t humidity = temp_hum >> 16;
	u_int32_t temperature = temp_hum & 0xFFFF;
	sprintf ((char*) str, "Temperature: %lu, humidity: %lu\r\n", temperature, humidity);
    printf("%s", str);*/
    test1();
}

u_int32_t ParseAM2301Data (u_int32_t* data)
{
	int i = 0;
	u_int32_t hum_temp = 0;

	for (i=0; i<32; i++)
	{
		hum_temp <<=1;
		hum_temp |= data[i];
	}

	return hum_temp;
}

void test1()
{
    char str[100];
	  buffer[3] |= hum_temp>>24;
	  buffer[2] |= hum_temp>>16;
	  buffer[1] |= hum_temp>>8;
	  buffer[0] |= hum_temp;
	  sprintf ((char*) str, "Temperature: %d.%d, Humidity: %d.%d\r\n",
	      buffer[3], buffer[4], buffer[2], buffer[1]);
      printf(str);
}
