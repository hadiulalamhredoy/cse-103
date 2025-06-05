#include <stdio.h>
#include <stdlib.h>
int main()
{
float w,h,BMI,h_m;
printf("Enter the value weight in kg:");
scanf("%f",&w);
printf("Enter the value of hight in feet:");
scanf("%f",&h);
h_m=(h*0.3048);
printf("Hight in meter:%f\n",h_m);
BMI=w/(h_m*h_m);
printf("BMI=%f\n",BMI);
if(BMI<18.5){
printf("Underweight");
}
else if(BMI<25.5){
printf("Normalweight");
}
else if(BMI<30.00){
printf("overweight");
}
else if(BMI>=30.00){
printf("obesity");
}
return 0;
}
Output:
