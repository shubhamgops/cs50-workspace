/* Program to evaluate polynomial 3x^3 - 5X^2 + 6*/
#include<stdio.h>
#include<math.h>
int main(void)
{
		double x = 2.55, result;
		result = 3 * (pow(x, 3)) - 5 * (pow(x, 2)) + 6;
		printf("result = %f\n", result);

		return 0;
		
}