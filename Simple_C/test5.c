#include<stdlib.h>
#include<stdint.h>
#include<stdio.h>

int main()
{
    int n = 4;
    int *ptr = malloc(sizeof(int)*n);
    if (ptr == NULL) return 1;
    
    for(int i = 0; i<n; i++)
    {
        *(ptr+i) = i;
        printf("Element %d: %d \n", i,*(ptr+i));
    }
    free(ptr); // zwalniam pamiec 
    return 0;
}