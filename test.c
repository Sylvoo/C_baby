#include <stdio.h>

int main() {
    printf("Hello from test.c!\n");


    printf( "Znaki: %c, %c\n", 'h', 68 );
    printf( "Liczby (1): %d %i\n", 23, 45 );
    printf( "Liczby (2): %5d %0*d\n", 1234, 8, 5678 );
    printf( "Lancuchy znakow: %s, %s\n", "napis pierwszy", "napis drugi" );
    printf( "Systemy liczbowe: %d %x %o %#x %#o \n", 250, 250, 250, 250, 250 );
    printf( "Liczby zmiennoprzecinowe: %4.2f %+.0e %E \n", 2.1254, 2.1254, 2.1254 );
    printf( "Liczba bez  zer wiadacych: %7d \n", 1387 );
    printf( "Liczba z zerami wiadocymi: %07d \n", 1387 );
    printf( " alehandrooo ");

    return 0;
}
