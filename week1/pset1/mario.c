#include <stdio.h>
#include <cs50.h>

//prototype
int GetInput(void);
int main(void)
{
    int n = GetInput();
    
    
     for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= i+1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    
}

//GetInput method returning int value 
int GetInput(void)
{
    int n;
    do
    {
        printf("Height: ");
        n = GetInt();
    }
    while(n < 0 || n > 23);
    
    return n;
}