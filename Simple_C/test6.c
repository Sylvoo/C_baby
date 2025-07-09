#include<stdlib.h>
#include<stdint.h>
#include<stdio.h>

int* gen_tab(int n)
{
    int* ptr = malloc(sizeof(int)*n);
    if(ptr == NULL) return 1;
    for (int i = 0; i<n; i++)
    {
        *(ptr+i) = i;
    }
    return ptr;
}


int main()
{
    int*ptr = gen_tab(5);
    for (int i = 0; i<5; i++)
    {
        printf("%d ", *(ptr+i));
    }
    free(ptr);

    return 0;
}