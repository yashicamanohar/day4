#include <stdio.h>
#include<string.h>

int main()
{
    char username[20]="yashi";
    int password=1234;
    char arr[20];
    int x;
    scanf("%s",arr);
    scanf("%d",&x);
    if(((strcmp(username,arr)==0)&&(password==x)))
    printf("password correcet`");
    else
    printf("password not correct");
    
    
}