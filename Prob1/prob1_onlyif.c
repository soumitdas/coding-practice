//Problem1: using if...else
//Author- Soumit Das

#include<stdio.h>

int main()
{
    int year;
    printf("\nEnter the year: ");
    scanf("%d",&year);
     
    if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
        printf("\nThe entered year is a Leap Year");
    else
        printf("\nThe entered year is not a Leap Year");
     
    return 0;
    }