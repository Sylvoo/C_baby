#include<stdlib.h>
#include<stdint.h>
#include<stdio.h>

uint16_t sumuj(const int* tab, int rozmiar)
{
    uint16_t suma = 0;
    for(uint8_t i = 0; i<rozmiar; i++)
    {
        suma += *(tab+i); 
    }
    return suma;
}

int main()
{
    int dane[] = {2, 5, 3, 1};
    int suma = (uint16_t)sumuj(dane, 4);  // powinno zwrócić 11
    printf("%d", suma);
 
    return 0;
}