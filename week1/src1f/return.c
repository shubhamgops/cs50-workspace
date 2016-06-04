#include <stdio.h>

//function prototype
int Cube(int a);

int main(void)
{
    int x=2;
    printf("x is now %i\n", x);
    printf("cubing.......\n");
    x=Cube(x);
    printf("cubed! \n");
    printf("x is now %i\n", x);
}

/**
 * cubes argument
 */
int Cube(int n)
{
    return n * n * n;
}