/**
 * program that ask user for their name
 * and print it initials in uppercase with no space followed 
 * by newline
 **/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = GetString();
    
    printf("%c", toupper(s[0]));
    for(int i = 0,n = strlen(s); i < n; i++)
    {   
        if(s[i] == ' ')
        {   
            i++;
            printf("%c", toupper(s[i]));
            continue;
        }
    }
    printf("\n");
    
}
