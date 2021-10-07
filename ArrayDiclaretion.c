#include<stdio.h>
int main(void)
{

int arr[100]={0,3,5,7};
for(int i=0; i<10; i++)
{

    if(arr[i]==7)
    {
        printf("%d",i);
        break;
    }
}

    getch();
    return 0;
}
