/* Write a C program to find sum of all odd numbers from 1 to n using for loop.  */
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,sum = 0;
    for(i=1; i<=10; i+=2)
    {
        printf("odd num : = %d\t", i);
        sum += i;
    }
    printf("\nSum of odd numbers is = %d", sum);
}

