#include <stdio.h>

int main(void)
{
    //display mapping for uppercase letters
    for(int i =65; i< 65 + 26; i++)
    {
        printf("%c: %i\n",(char)i, i);
    }
    
    //seperate uppercase from lowercase
    printf("\n");
    
    //display mapping for lowercase
    for(int i = 97; i < 97 + 26; i++)
    {
        printf("%c: %i\n", (char)i, i);
    }
    
    printf("\n");
    
    //display all ascii mapping
    for(int i= 0; i< 255 ; i++)
    {
        printf("%c: %i\n", (char)i, i);
    }
}