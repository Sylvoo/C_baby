#include<stdlib.h>
#include<stdint.h>
#include<stdio.h>

int max_element(int tab[], int rozmiar)
{
    int k = 0;
    int max = 0;
    while(k < rozmiar)
    {
        if (*(tab+k) > max) max = *(tab+k);
        k++;
    }
    return max;
}

int main()
{
    int t[] = {3, 9, 100, 7};
    printf("%d",max_element(t, sizeof(t) / sizeof(t[0])));  // powinno zwrócić 100
    

    return 0;
}