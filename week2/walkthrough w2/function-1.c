#include <stdio.h>
#include <cs50.h>

int GetPositiveInt(void);
int main(void)
{
    int n = GetPositiveInt();
    printf("thanks for the %i\n", n);
}

int GetPositiveInt(void)
{
    int n;
    do
    {
        printf("please give me positive int: ");
        n = GetInt();
    }
    while(n < 1);
    return n;
}
