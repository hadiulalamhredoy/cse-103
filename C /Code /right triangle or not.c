#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a = ");
scanf("%d",&a);
printf("Enter b = ");
scanf("%d",&b);
printf("Enter c = ");
scanf("%d",&c);

if(a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
printf("It is a right triangle");

else
printf("It is not a right triangle");

return 0;

}
