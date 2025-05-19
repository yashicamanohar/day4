#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    for(int i=1;i<=50;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}