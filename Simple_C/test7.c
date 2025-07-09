#include<stdlib.h>
#include<stdint.h>
#include<stdio.h>

typedef struct
{
    float temp;
    uint32_t time;
} Pomiar;

Pomiar* make_buffor(int number) // must have to have typdef struct
{   
    Pomiar* ptr = malloc(sizeof(Pomiar)*number);
    return ptr;
}

void save(Pomiar* bufor, int index, float temp, uint32_t time)
{
    if (bufor == NULL) printf("Bufor jest pusty");
    bufor[index].temp = temp;
    bufor[index].time = time;
}

void show(Pomiar* bufor, int liczba)
{
    for(int i =0; i<liczba; i++)
    {
        printf("Pomiar %d: %.1fC, czas: %lu ms\n",i, bufor[i].temp, (unsigned long)bufor[i].time);
    }
}


int main()
{
    int N = 3;
    Pomiar* bufor = make_buffor(N); // alokuje pamiec
    
    save(bufor, 0, 23.7,10);
    save(bufor, 1, 12, 100);

    show(bufor, N);

    free(bufor); //zwalniam pamiec
    return 0;
}