#include <stdio.h>
#include <cs50.h>

//prototype
int GetPositiveInt();

int main(void)
{
    int n=GetPositiveInt();
    printf("thanks for the %i! \n", n);
}

/**
 * gets a positive integer from user
 */
int GetPositiveInt()
{
    int n;
    do
    {
        printf("please give me a positive int: ");
        n=GetInt();
    }
    while(n < 1);
    
    return n;
}