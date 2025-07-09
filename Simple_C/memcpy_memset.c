#include<string.h>
#include<stdint.h>
#include<stdlib.h>

int main()
{
    uint8_t src[5] = {2,3,4,5};
    uint8_t dest[5] = {1};

    memcpy(dest, src, 5);
    uint8_t arr_size = sizeof(dest)/sizeof(dest[0]);
    for(uint16_t i = 0; i<arr_size; i++)
    {
        printf("%d",dest[i]);
    }
        
    return 0;
}

