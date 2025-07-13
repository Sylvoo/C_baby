#include <stdio.h>

void reverse(char tab[])
{
    int len = 0;
    while(tab[len] != '\0') len++;
    char pom[len];
    int i;
    
    for (i = 0; i<len/2; i++)
    {
        char tmp = tab[i];
        tab[i] = tab[len-1-i];
        tab[len-1-i]=tmp;
    }
}

void reverse_ptr(char *str)
{
    if (str == NULL) return;
    char *start = str;
    char *end = str;

    while(*end != '\0') end++;
    end --;
    while(start < end)
    {
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end-- ;
    }
}


int main() 
{
    char str[] = "parasol";
    char str2[] = "zabkolandia";
    reverse(str);
    printf("\n%s\n",str);

    reverse_ptr(str2);
    printf("\n%s\n",str2);
    return 0;
}