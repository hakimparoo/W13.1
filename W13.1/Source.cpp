#include<stdio.h>

struct MyStruct
{
    int dec;
    int i = 0, j;
    int bin[100];
}a;

int bynary(int);

int main()
{
    printf_s(" Input Decimal value => ");

    scanf_s("%d", &a.dec);

    do
    {
        a.bin[a.i] = bynary(a.dec);
        a.dec /= 2;
        a.i++;
    } while (a.dec > 0);


    printf("\n\n Binary value is ");

    for (a.j = a.i - 1; a.j >= 0; a.j--)
    {
        printf_s("%d", a.bin[a.j]);
    }
    for (int x = 0; x < 2; x++)
    {
        printf_s("\n");

    }

    return 0;
}

int bynary(int dec)
{
    return dec % 2;
}