#include <stdio.h>
int i;

int main()
{
    int num=456;
    i=num/2;
    int result=prime_number(num);
    if (result==1)
        printf("The number %d is a prime number\n",num);
    else
        printf("The number %d is not a prime number\n",num);
}

int prime_number(int num)
{
    if(i==1)
        return(1);
    else if(num%i==0)
        return(0);
    else
        prime_number(num);
}
