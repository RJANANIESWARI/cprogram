#include<stdio.h>
void main()
{
int n,i,f=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n/i==0)
{
f=1;
}
if(f==0)
{
prinf("%d is a prime number");
}
else
{
printf("%d is not a prime number");
}
}
}
