#include<stdio.h>
int factorial (int n)
{
int i,result;
result=1;
for(i=1;i<=n;i++)
result=result*i;
return result;

}

main()
{
int num,a;
printf("Enter a non-negative integer :");
scanf("%d",&num);
a=factorial (num);
printf("%d",a);

}
