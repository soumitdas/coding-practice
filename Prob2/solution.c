//Problem 2 without using array
//Author- Soumit Das

#include<stdio.h>

int hotel(int m, int r1, int r2, int r3)
{
    int rem,price1,price2,price3,price22,price11;

    if (m%4 == 0)   // check whether the M is divisible by 4 or not. If yes return 0
        return 0;
    
    else {
        
        rem = 4- (m-(m/4)*4);   // determine how much to add to make M divisible by 4
        price2 = r2 * (rem/2); 
        price1 = r1 * rem; 
        
        if (rem >= 3)   // check for the lowest price if Ch >=3
        {
            price3 = r3 * (rem/3);
            price22 = (r2 * (rem/2) + (r1 * (rem - (rem/2)*2)));
            int c=0;
            
            while (price3 && price22 && price1) 
            {
                price3--;
                price22--;
                price11--;
                c++;
            }
            return c;  
        }
        else if (rem >= 2)  // check for the lowest price if Ch >=2
        {
            if (price1 < price2)  
                return price1;
            else
                return price2;
        }
        
        else
            return price1;
        }
    }

int main()
{
    int m,r1,r2,r3,n,c=1;
    printf("Enter the no of Test case: ");
    scanf("%d", &n);
    printf("\nPlease Enter the value in M R1 R2 R3 format");
    
    while (n>0)
    {
        printf("\nTest Case: %d\n",c);
        scanf("%d",&m);
        scanf("%d",&r1);
        scanf("%d",&r2);
        scanf("%d",&r3);
        printf("\nPrice: %d\n", hotel(m,r1,r2,r3));
        c++;
        n--;
    }
    
    return 0;
	}