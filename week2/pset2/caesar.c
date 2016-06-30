/**
 * ceaser encryption program
 **/
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //taking input only as one key
    if(argc != 2)
    {
       printf("Usage: /home/cs50/pset2/caesar <key> \n");
       return 1;
    }
    
    //getting key as command line argument
    int k = atoi(argv[1]);
    
    //getting string from user
    string p = GetString();
    string c = p ;
    

    //creating cipher text from plane text    
    for(int i = 0; i < strlen(p); i++)
    {  
       if(isalpha(p[i]))
       {
           if(islower(p[i]))
           {
               c[i] = (((p[i]-97) + k) % 26) + 97;
           }
           if(isupper(p[i]))
           {
                c[i] = (((p[i]-65) + k) % 26) + 65;
           }
       }
       else
       {
           c[i] = p[i];
       }
    }
    
    
    //displaying cipher text
    printf("%s\n", c);
    

}