#include<stdio.h>

int main()
{
    int firstterm, secterm, newterm, limit;

    firstterm = 0;
    secterm = 1;


    printf("Enter a limit: ");

    scanf("%d", &limit);



    for(newterm=0; newterm<= limit; newterm = firstterm + secterm)
    {
       printf("The newterm is %d \n", newterm);

       firstterm =secterm;

       secterm = newterm;
    }


    return 0;
}
