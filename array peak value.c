#include<stdio.h>

int main()
{
    int a[5]={15,19,14,16,13};

    int i;

    for(i=0; i<=4; i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            printf("The peak value is %d\n", a[i]);
        }
    }
    return 0;
}
