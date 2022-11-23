#include<stdio.h>
int main()
{
    int fact,n,i;

     fact=1;

    printf("enter a positive number, n :    \n");

    scanf("%d", &n);



    for(i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of n is %d \n", fact);

    return 0;

}
