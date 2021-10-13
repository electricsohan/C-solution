// Prime Number

// Question
// Take input from users the range and then print all the prime numbers within that range. Also print the total number of print numbers.

#include<stdio.h>
#include<stdbool.h>
#include<math.h>


// To check a number is prime or not 
// brute force approach TC -O(n)                  SC-O(1)
// more efficient approach TC -O(sqrt(n))         SC-O(1)

// why sqrt(n)  
// because if a no ( n = a*b ) is a product of two no then 
// one no will be (a<=sqrt(n)) and the second no will be (b>=sqrt(n))
// so if a factor is not found till sqrt(n) then it will not have any factor


bool checkPrime(int n)
{
    if(n==0 || n==1)
        return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        { 
            return false;
        }
    }
    return true;
}


// driver function
int main()
{
    int a,b; 
    // printf("Enter a range  to be checked \n");
    scanf("%d  %d",&a,&b);
    int count = 0;
    printf("Prime numbers in the given range are: ");
    for(int i = a; i<=b;i++)
    {
        if(checkPrime(i))
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\nThere are %d prime numbers in the given range.", count);
    return 0;
}