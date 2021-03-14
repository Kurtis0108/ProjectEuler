/*  Problem 001; Multiples of 3 and 5 
    >Find the sum of all the multiples of 3 or 5 below 1000 */

#include <stdio.h>

int main()
{
    
    // iterate through all integers between 0 up to but not including 1000
    // if i has no remainder when divided by 3 or 5, add i to z, else move on to next integer
    // print z
    
    int z = 0;
    for (int i = 1; i < 1000; i++){
       if (i % 3 == 0 || i % 5 == 0){
           z = z+i;
       }
    }
    
    printf("%d ", z);
    return 0;
}
