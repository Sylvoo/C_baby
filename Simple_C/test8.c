#include<stdio.h>
#include<stdint.h>

union Bajty
{
    uint16_t wartosc;
    uint8_t bajty[2];
    uint32_t wartosc2;
    uint16_t bajty2[2];
};


int main()
{
    union Bajty dane;

    dane.wartosc2 = 0xABCDEF12;

    printf("Cala wartosc: %x\n", dane.wartosc2);
    printf("Low Byte: %x\n", dane.bajty[0]);
    printf("High Byte: %x\n", dane.bajty[1]);
    printf("High Byte: %x\n", dane.bajty[2]);
    printf("Cala wartosc: %x\n", dane.bajty2[0]);
    printf("Cala wartosc: %x\n", dane.bajty2[1]);

    typedef unsigned char u8;
    u8 counter;
    return 0;
}