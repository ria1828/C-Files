#include<stdio.h>
int main()
{
    int i,arr[10];
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0 ; i<10; i++)
    {
        printf("%d\t",arr[i]);
    }


    getch();
    return 0;
}
