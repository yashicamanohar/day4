#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
int flag=0;
for( int i=1;i<=x;i++)
{
    if(x%i==0)
    flag++;
    
}
if(flag==2){
printf("%dis prime number",x);
}
else 
{
    printf("%d is not prime number",x);
}
}