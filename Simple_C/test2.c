#include<stdlib.h>
#include<stdint.h>

void swap(int* a, int* b)
{
    int k = 0;
    k = *a; 
    *a = *b;
    *b = k;
    printf("%d %d", *a, *b);  
}
void sw( uint16_t liczba)
{
   uint16_t high = (liczba >> 8);
   uint16_t low = (liczba << 8);
    uint16_t swapped = low | high;
    printf("%x\n", swapped);
}



int main()
{
    uint16_t hex = 0x1234;
    sw(hex);


    int a = 5;
    int b = 10;
    swap(&a,&b);



    return 0;
}