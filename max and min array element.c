#include<stdio.h>

int main()
{
    int a[5]={11,22,30,43,3},max,min, i;

    max = a[0];
    min=a[0];
    for(i=0; i<=4; i++)
    {
      if(a[i]>max)
      {
          max= a[i];
      }
       if(a[i]< min)
       {
           min=a[i];
       }
    }
       printf("The maximum element is %d\n", max);
       printf("The minimum element is %d\n", min);


    return 0;
}
