#include <stdio.h>
#include <math.h>
#include <cs50.h>

//prototype
float GetDollar(void);

int main(void)
{
    printf("o hai! ");
    
    float j = GetDollar();
    int k = (int) round(j * 100);
   
   
    int count = 0;
    int balance = k;
    
    while(balance >= 25)
    {
        balance = balance - 25;
        count++;
    }
    while(balance >= 10)
    {
        balance = balance -10;
        count++;
    }
    while(balance >= 5)
    {
        balance = balance - 5;
        count++;
    }
    while(balance >= 1)
    {
        balance = balance - 1; 
        count++;
    }  
    
    printf("%i \n",count);
    
}

//getting dollar value from user
float GetDollar(void)
{   
    float n;
    do
    {   
        printf("How much change is owed? \n");
        n=GetFloat();
    }
    while(n<0);
    
    return n;
}