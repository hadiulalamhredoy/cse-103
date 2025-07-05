#include<stdio.h>
int main()
{
float a,b,c;
printf("a = ");
scanf("%f",&a);

printf("b = ");
scanf("%f",&b);

printf("c = ");
scanf("%f",&c);

if ((a + b > c ) && (b + c > a) && (c + a > b))

{
float perimeter = a + b + c;
printf("triangle is valid");
printf("perimeter : %.2f\n",perimeter); }

else{
printf("The triangle is not valid\n");
}
return  0;
