/**
 * vigenere encryption program
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
       printf("Usage: /home/cs50/pset2/caesar <keyword> \n");
       return 1;
    }
  
    //getting keyword as command line argument
    string keyword = argv[1];
    
    //taking input as keyword only
   for(int i = 0, n = strlen(keyword); i < n; i++)
   {
        if(!isalpha(keyword[i]))    
        {
            printf("pleaes enter a valid keyword.\n");
            return 1;
        }
   }
   
    //getting string from user
    string p = GetString();
    int keylength = strlen(keyword);
    int key[keylength];
    string c = p;
    
    
    //getting value of shift key
    for(int i = 0; i < keylength; i++)
    {
        key[i] = toupper(keyword[i]) - 'A';
    }
    
    int strlength = strlen(p);
    
    
    //calculating cipher text
    for(int i = 0, k = 0; i < strlength; i++)
    {  
       if(isalpha(p[i]))
       {
           if(islower(p[i]))
           {
               c[i] = (((p[i]-97) + key[k]) % 26) + 97;
           }
           if(isupper(p[i]))
           {
                c[i] = (((p[i]-65) + key[k]) % 26) + 65;
           }
       }
       else
       {
           c[i] = p[i];
           continue;
       }
       
       if(k < keylength-1)
       {
           k++;
       }
       else
       {
           k = 0;    
       }
    }
    
    
    //displaying cipher text
    printf("%s\n", c);
    
    

}