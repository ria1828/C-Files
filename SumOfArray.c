#include<stdio.h>
int main()
{
    int i,sum=0,array[]={1,2,3,4};

   for(i=0; i<4; i++)
   {
        sum=sum+array[i];
  }
    printf("sum=%d",sum);


    getch();
    return 0;
}
