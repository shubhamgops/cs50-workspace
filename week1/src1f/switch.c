#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ask user for integer
    printf("Give me an integer between 1 and 10: ");
    int n=GetInt();
    
    //judge user's input
    switch(n)
    {
        case 1:
        case 2:
        case 3:
            printf("you picked a small number. \n");
            break;
        
        case 4:
        case 5:
        case 6:
            printf("you picked a medium number. \n");
            break;
        
        case 7:
        case 8:
        case 9:
        case 10:
            printf("you picked a big number. \n");
            break;
        
        default:
            printf("you picked an invalid number. \n");
            break;
    }   
}