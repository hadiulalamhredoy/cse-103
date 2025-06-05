#include<stdio.h>
#include<math.h>
main()
{
double BMI,weight,height;
printf("weight = ");
scanf("%lf",& weight);
printf("height = ");
scanf("%lf",& height);

double height_m = height * 0.3048;
BMI = (weight) / (pow(height_m,2));

if( BMI < 18.5)
printf("underweigth =");

if(BMI>= 18.5 && BMI < 25.0)
printf("normalweigth = " );
if(BMI>= 25.0 && BMI < 30.0)
printf("overweigth = " );

if(BMI>= 30.0)
printf("obesity = ");
}
