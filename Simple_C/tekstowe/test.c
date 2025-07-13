#include<stdio.h>



int main()
{
    FILE *plik;
    plik = fopen("parabola.txt","w");
    if (plik != NULL)
    {
        fprintf(plik, "To jest linia tekstu.\n");
        fputs("To jest kolejna linia tekstu.\n",plik);
        fputc('A', plik);
        fclose(plik);
    } 
    else 
    {
        printf("Nie udalo sie otworzyc pliku");
    }

    return 0;
}