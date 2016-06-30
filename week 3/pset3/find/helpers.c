/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

bool bs(int key, int array[],  int min, int max, int n);

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int min,mid,max;
    // TODO: implement a searching algorithm
    /*for(int i = 0; i < n; i++ )
    {
        if(value == values[i])
        {
            return true;
        }
    }*/
    min = 0;
    max = n-1;
    while(min <= max)
    {
       mid = ( min + max ) / 2;
       if(value == values[mid])
            return true;
       else if( value < values[mid])
       {
           max = mid -1;
       }
       else
       {
           min = mid + 1;
       }
        
    }
    
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    //implementation of bubble sort
    int k, j, temp;
    for(k = 1; k <= n-1; k++)
    {
        for(j = 0; j <= n-k-1; j++)
        {
            if(values[j] > values[j+1])
            {
                temp = values[j];
                values[j] = values[j+1];
                values[j+1] = temp;
            }
        }
    }
    return ;
}