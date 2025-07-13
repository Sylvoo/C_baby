#include<stdlib.h>
#include<stdint.h>


int htoi(uint16_t hex)
{
    return (int)hex;
}
int htoi2(const char * hex)
{
    char c;
    int result = 0;
    if(hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X'))
    {
        hex += 2;
    }
    while((c = *hex) != '\0')
    {
        
        int digit;
        if(c >= '0' && c <= '9')
        {
            digit = c - '0';
        }
        else if (c >= 'a' && c<='f')
        {
            digit = c - 'a' + 10;
        }
        else if (c >= 'A' && c<= 'F')
        {
            digit = c - 'A' + 10;
        }
        else break;
        hex++;
        result = result *16 + digit;
    }

    return result;
}


int main()
{
    uint16_t zmienna = 0xff;
    char zmienna2[] = "0xff";
    
    printf("%d\n", htoi(zmienna));
    printf("%d\n", htoi2(zmienna2));
    return 0;
}