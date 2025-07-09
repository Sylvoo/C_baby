#include<stdlib.h>
#include<string.h>
#include<stddef.h>

char str[] = "Witam ";
char str2[] = "Cie! ";

char st[] = "ala lubi koty";

int funkcja(const char* st)
{
    int k = 0;
    while(*(st+k) != 0) k++;

    return k;
}

int ff = 100;
int funkcja1(int x)
{
    x = 2;
}
int gg = 100;
int funkcja2(int* y)
{
    *y = 2;
}

int main() 
{
    funkcja1(ff);
    printf("%d\n",ff);
    funkcja2(&gg);
    printf("%d",gg);




    //strcat(str,str2);
    printf("%s\n",str);

    printf("%d\n",sizeof(str));
    printf("%c",*(str+2));
    printf("dlugosc 1: %d\n", funkcja(str));
    int k = 0;
    int a = 0;
    printf("%x\n",a);
    a |= (255<<8);
    printf("%x\n", a);
    char *ptr = (char*)&k;

    ptr++;
    *ptr =0xff; 

    printf("%x\n", k);

    long long int tt = 0;
    printf("%d\n",sizeof(tt));

    int kk = 0x11223344;
    unsigned short * pp = (unsigned short*)&kk;
    printf("%x\n", *pp);
    pp++;
    printf("%x", *pp);



    return 0;
}