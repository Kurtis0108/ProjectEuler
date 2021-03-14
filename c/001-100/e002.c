/*  Problem 002; Even fibonacci numbers
    
    Each new term in the Fibonacci sequence is generated 
    by adding the previous two terms. 
    By starting with 1 and 2, the first 10 terms will be:
        
        1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

    By considering the terms in the Fibonacci sequence 
    whose values do not exceed four million, 
    find the sum of the even-valued terms.                  */

#include <stdio.h>

int main()
{
    int sum = 0;
    int x   = 1;
    int y   = 2;

    //interate x and y as n & n+1 of fibonacci sequence
    //through each loop check if either is divisible by 2 (even), add them to sum if so
    //potentially able to optimise so that only 1 integer is needed in global scope, reducing amount of if conditions in loop
    
    while   (y < 4000000 || x < 4000000)    {
    if      (x % 2 == 0){sum = sum+x;}
    else if (y % 2 == 0){sum = sum+y;}
    x = x + y;
    y = y + x;
                                            }
    
    printf  ("%d", sum);
    return  0;
}
