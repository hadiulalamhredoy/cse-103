#include<stdio.h>
int main()
{
float i,sum=0,n;
printf(" n = ");
scanf("%f",&n);

for(i=1;i<=n;i++)
{
sum = sum + i;
}
printf("sum= %f\n",sum);
}
