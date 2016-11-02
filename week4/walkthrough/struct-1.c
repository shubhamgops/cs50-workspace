#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "structs.h"

#define STUDENT 3

int main(void)
{
    student students[STUDENT];
    
    for(int i = 0; i < STUDENT; i++)
    {
        printf("student's name:");
        students[i].name = GetString();
        
        printf("student's house:");
        students[i].house = GetString();
    }
    
    for(int i = 0; i < STUDENT; i++)
    {
        printf("%s is in %s. \n", students[i].name,students[i].house);
    }
    
    FILE* file = fopen("students.csv","w");
    if(file != NULL)
    {
         for(int i = 0; i < STUDENT; i++)
        {
            fprintf(file,"%s, %s\n", students[i].name,students[i].house);
        }
        fclose(file);
    
    }
    
    for(int i = 0; i < STUDENT; i++)
    {
        free(students[i].name);
        free(students[i].house);
    }
}