#include <stdio.h>

//protoype
void cough(void);

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        cough();
    }
}

/**
 * cough once
 */
 void cough(void)
 {
     printf("cough\n");
 }