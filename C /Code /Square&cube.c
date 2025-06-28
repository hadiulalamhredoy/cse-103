#include<stdio.h>
int square (int x)
{
int s;
s=x*x;
return s;
}

int cube (x)
{
int c;
c=x*x*x;

return c;
}
main ()
{
int a,b,c;
scanf("%d",&a);
b=square(a);
c=cube(a);
printf("%d %d",b,c);
}
