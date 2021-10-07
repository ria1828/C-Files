#include<stdio.h>
int main()
{
    int i, n, sum=0,arr[100];
    float avg=0;
    printf("Please enter your number:\t");
    scanf("%d",&n);
     for(i=0; i<n; i++)
     {
         scanf("%d",&arr[i]);
         sum=sum+arr[i];
         avg=(float)sum/n;
     }
     printf("Sum=%d\n",sum);
     printf("Average=%.2f",avg);

    getch();
    return 0;
}
