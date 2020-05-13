//number of distinct elements in the sorted sequence.
//Author- Soumit Das

#include<stdio.h>
 int main()
 {
    int num,temp,c=0;
    printf("\nEnter the numbers in sorted format and end with -1\n");
    scanf("%d",&num);
    temp = num;
    c++;
    while(num != -1)
    {                
        if(temp!=num)
            c++;
        temp = num;
        scanf("%d",&num);
        }
    
    printf("Total distinct no: %d\n",c);
    return 0;
    }