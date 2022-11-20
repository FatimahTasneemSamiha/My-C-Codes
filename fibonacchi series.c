#include<stdio.h>

int main()
{
    int firstterm,newterm,termvalue, limit, sum;

    firstterm = 1;
    sum =0;
    printf("Enter a limit:  ");
    scanf("%d", &limit);

    for(termvalue=1; termvalue<=limit; termvalue++)
    {
       newterm = sum + firstterm;
       printf("%d  ", newterm);
       sum=firstterm;
       firstterm = newterm;

    }
    return 0;
}
