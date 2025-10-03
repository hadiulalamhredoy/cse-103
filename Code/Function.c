//Add,sub,mul,div 3 numbers 
#include<stdio.h>

int sum(int a ,int b, int c)
{
   printf("The sum is  :  %d\n",a+b+c);

}

void sub(int a ,int b,int c)
{
    printf("The sub is : %d\n",a-b-c);
}

void multiplies(int a ,int b,int c)
{
    printf("The mul is : %d\n",a*b*c);
}

void divides(int a ,int b,int c)
{
    printf("The div is : %d\n",a/b/c);
}


int main()
{

    sum(0,20,7);
    sub(27,7,0);
    multiplies(20,7,1);
    divides(140,7,1);
}

//Cube & Square of a Function  
#include<stdio.h>
int square(int a)
{
    return a * a ;

}
int main()
{

    int num;
    printf("Enter any integer number : ");
    scanf("%d",&num);

    int result = square(num);
    printf("Sqaure is : %d\n",result);
}
//Area of a Triangle  
#include<stdio.h>
double triangleArea(double b,double h);
int main()
{
   double base,heigth;

   printf("Enter Base = ");
   scanf("%lf",&base);

   printf("Enter Heigth = ");
   scanf("%lf",&heigth);

    double area = triangleArea(base,heigth);

    printf("Area = %.lf\n",area);

}

{

    return 0.5 * b * h;
}


////base^exponent
//2^3= 2*2*2=8
//2^4= 2*2*2*2=16
//3^4= 3*3*3*3=81
#include<stdio.h>
void calculatePower(double base , double exp){
double result =1,i;
for( i =1; i<=exp; i++)
{
   result = result * base;

}

    printf("%.1lf\n",result);


}


int main()
{

    double base,exp,result=1,i;

     printf("Enter base  = ");
     scanf("%lf",&base);

     printf("Enter exp = ");
     scanf("%lf",&exp);

     calculatePower(base,exp);

}

//aNother   Method  
#include<stdio.h>
int main()
{



     double base,exp,result=1,i;

     printf("Enter base  = ");
     scanf("%lf",&base);

     printf("Enter exp = ");
     scanf("%lf",&exp);


    for(i =1;i<exp;i++)
    {
        result =  result *  base;
    }

      printf("%lf\n",result);


}
//
#include<stdio.h>
void display(int x[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }

}


int main()
{
   int num[] = {10,20,30,40,50};
    display(num);



}

//Find Minimum  & Maximum Vaule  
#include<stdio.h>
int maximum(int x[])
{
    int i;
    int max = x[0];
    for(i=1;i<5;i++)
    {
        if(max < x[i])
            max = x[i];

    }


        return max;
}


int main()
{
   int num[] = {10,20,30,40,50};
   int maximumVaule = maximum(num);

   printf("Maximum = %d\n",maximumVaule);


}

//
#include<stdio.h>
void display(char str[])
{
    int i  =0;
    while(str[i]!='\0')
    {

        printf("%c\n",str[i]);
         i++;
    }

}



int main()
{
    char str[] ="Oishee";
    display(str);

}

//Find the Factoruial Vaule 
#include<stdio.h>
int main()
{
   int result = fact(5);
   printf("Factorial of 5  = %d",result);

}

int fact(int n)
{

    if(n==1)
    {
       return 1;
    }

    else
       return n*fact(n-1);

}
