#include <stdio.h>
#include <memory.h>

#define CHAR_BIT 8

uint32_t rotl32 (uint32_t value, unsigned int count);
uint32_t rotr32 (uint32_t value, unsigned int count);
uint32_t set_bit (uint32_t number, uint32_t x, uint32_t n);

void main(void)
{
    SignalStructure signal = {0, 1};
    uint32_t mask = 0xFFFE;
    uint32_t mask1 = 0xFFFF;
    uint32_t position = 15;
    uint32_t x = 0;
    int value = 1;

    printf("mask = %u\n", mask);
    mask = rotl32(mask, 2);
    printf("mask = %u\n", mask);

    printf("mask1 = %u\n", mask1);
//    mask1 = set_bit(mask1, x, position);
//    mask1 |= 0 << position;
    mask1 &= ~(1 << position);
    printf("mask1 = %u\n", mask1);
    /*printf("the value is: %d\n", (Register & signal.SignalAddressOffset)>>signal.SignalAddressOffset);
    printf("the value is: %d\n", (Register & signal.SignalAddressOffset)>>signal.SignalAddressOffset);*/
}

uint32_t rotl32 (uint32_t value, unsigned int count) {
    const unsigned int mask = CHAR_BIT * sizeof(value) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}

uint32_t rotr32 (uint32_t value, unsigned int count) {
    const unsigned int mask = CHAR_BIT * sizeof(value) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}

uint32_t set_bit (uint32_t number, uint32_t x, uint32_t n)
{
    number ^= (-x ^ number) & (1UL << n);
    return number;
}


