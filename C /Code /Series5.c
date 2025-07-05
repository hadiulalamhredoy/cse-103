#include<stdio.h>
int main()
{
int i,n,result=1;
printf("Enter n : ");
scanf("%d",&n);

for(i=1; i<=n; i++)
{
result = result * i;

}
printf("Result = %d\n",result);

}
