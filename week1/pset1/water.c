#include <stdio.h>
#include<cs50.h>

int main(void)
{   
    //declaring water bottle per minute shower
    const int bottles = 12; 
    
    //getting input from user 
    printf("minutes: ");
    int time = GetInt();
    
    //anlyse
    int total_bottles = time * bottles;
    
    //giving output
    printf("bottles: %i\n", total_bottles);
    
    
    
}