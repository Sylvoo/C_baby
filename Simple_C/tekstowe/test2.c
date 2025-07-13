#include<stdio.h>


int main()
{
    FILE *plik;
    char bufor[100];
    char znak;

    plik = fopen("parabola.txt","r");
    if (plik != NULL)
    {
        int k = 0;
        while(fgets(bufor, sizeof(bufor), plik) != NULL)
        {
            k++;
            printf("%s%d", bufor,k);
        }
        /*
        while((znak = fgetc(plik)) != EOF)
        {
            printf("%c", znak);
        }*/
        fclose(plik);
    } 
    else
    {
        printf("nie otworzono pliku :( ");
    }

    return 0;
}