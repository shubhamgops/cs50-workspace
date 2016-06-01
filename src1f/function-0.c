#include <stdio.h>
#include <cs50.h>

//prototype

void PrintName(string name);

int main(void)
{
    printf("enter your name: \n");
    string s=GetString();
    PrintName(s);
}

/**
 * says hello to someone by name.
 */
void PrintName(string name)
{
    printf("hello, %s\n",name);
}