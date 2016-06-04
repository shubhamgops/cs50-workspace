#include <cs50.h>
#include <stdio.h>

//prototype
void cough(int n);
void say(string word, int n);
void sneeze(int n);

int main(void)
{
    //cough three times
    cough(3);
    
    //sneeze three times
    sneeze(3);

}

/**
 * cough n times
 */
void cough(int n)
{
    say("cough",n);
}

/**
 * sneeze n times
 */
void sneeze(int n)
{
    say("achoo",n);
}

/**
 * say word n times
 * 
 */
void say(string word,int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", word);
    }
}