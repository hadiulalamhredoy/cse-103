//Area of Reccrtangular  

#include<stdio.h>
int main()
{
float length,width,area;
printf("Enter length = ");
scanf("%f",&length);
printf("Enter width = ");
scanf("%f",&width);
area = length * width;
printf("Area of rectangle = %.2f\n",area);
}

//Area of a Triangle  

#include<stdio.h>
int main()
{
float base,height,area;
printf("base=");
scanf("%f",&base);
printf("Height=");
scanf("%f",&height);
area = 0.5*base*height;
printf("Area=%f\n",area);
}


//Area of Circle

#include<stdio.h>
int main()
{
    float Radius, Area;
    printf("Enter Radius = ");
    scanf("%f",&Radius);

    Area = 3.1416 * Radius * Radius;
    printf("Area Of a Circle = %.2f\n",Area);

}

//Area of Square

#include<stdio.h>
int main()
{
float a,area;
printf("Enter any vaule of a : ");
scanf ("%f",&a);
area = a * a ;
printf("Area = %f\n",area);
}

//area of triangle given 3 sides

// Let ABC be a triangle such that the length of the 3 sides of the triangle is AB = c, BC = a and CA = b.

// The semi-perimeter of triangle ABC = s = (a + b + c)/2

// Then, the area of triangle ABC = √[s × (s – a) × (s – b) × (s – c)].
#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
  float side1, side2, side3, semiPerimeter, areaWith3Sides;
  
  printf("Enter side1 = ");
  scanf("%f", &side1);

  printf("Enter side2 = ");
  scanf("%f", &side2);

  printf("Enter side3 = ");
  scanf("%f", &side3);

  semiPerimeter = (side1 + side2 + side3) / 2;

  areaWith3Sides = sqrt(semiPerimeter * (semiPerimeter-side1) * (semiPerimeter-side2) * (semiPerimeter-side3) );

  printf("Area of triangle with 3 sides = %.2f\n",areaWith3Sides);

  getchar();
}

//Parameter Triangle
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
}
