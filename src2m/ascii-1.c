#include <stdio.h>
int main(void)
{
    //display mapping for uppercase letters
    for(char c='A'; c <= 'Z'; c++)
    {
        printf("%c: %i\n", c, (int) c);
    }
    
    //seperate uppercase from lowercase
    printf("\n");
    
    //display mapping for lowercase letters
    for(char c='a'; c <= 'z'; c++)
    {
        printf("%c: %i\n", c, (int) c);
    }
    
}