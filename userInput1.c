#include<stdio.h>
int main()
{
    int n,i;
    int arr[100];
    printf("Please  enter your number:\t");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
for(i=0; i<n; i++)
    {
      printf("number %d\n",arr[i]);
    }




    getch();
    return 0;
}
