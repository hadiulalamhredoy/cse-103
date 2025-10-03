//Aritmetic Operator  
#include<stdio.h>
int main()
{
    int a,b,div,sum,sub,mul;
    printf("Enter a  = ");
    scanf("%d",&a);
    printf("Enter b  = ");
    scanf("%d",&b);
    div  =  a / b;
    sum  =  a + b;
    mul  =  a * b;
    sub  =  a - b;
    printf("%d / %d = %d\n",a,b,div);
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,mul);

}
//Using Switch Case
#include<stdio.h> 
int main()
{
    int num1,num2; 
    char oper; 

    
    printf("Enter an Operator (+,-,*,/) : ");
    scanf("%c",&oper);


    printf("Enter num1 : " );  
    scanf("%d",&num1);  

    printf("Enter num2 : " );  
    scanf("%d",&num2);  

 
   switch(oper)
   {

       case '+':
       printf("%d + %d :%d\n",num1,num2,num1+num2);

       
       case '-':
       printf("%d - %d :%d\n",num1,num2,num1-num2);

       
       case '*':
       printf("%d * %d :%d\n",num1,num2,num1*num2);

       
       case '/':
       printf("%d / %d :%d\n",num1,num2,num1/num2);



   }


}
//Assignment Opearator  
#include<stdio.h>
int main()
{
     float a = 5;  
     a+=2;  // a =  a  + 2 (for addition)
    printf("%f\n",a);  

    a-=2; // a =  a  - 2 (for subtraction)
    printf("%f\n",a);

    a*=2; // a =  a  * 2 (for multipication)
    printf("%f\n",a);

    a/=2; // a =  a  / 2 (for division)
    printf("%f\n",a);


}



//Unary Operator  
#include<stdio.h>
int main()
{
     int x  = 10;  
    printf("%d\n",x++); //x=10  [this is the pre-increment]  
     printf("%d\n",x; //x=11  
     printf("%d\n",++x); //x=12  [this is the post-decrement]  
     printf("%d\n",x); //x=12  
     printf("%d\n",x--); //x=12 [this is the post-decrement]  
     printf("%d\n",--x); //x=10 [this is the pre-decrement]  
    
    
}


//Relational Operator

//// find largest numer of 3 numbers
#include <stdio.h>
int main()
{

    int number1, number2, number3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 > number2 && number1 > number3)
    {
        printf("%d is the largest number\n", number1);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("%d is the largest number\n", number2);
    }
    else if (number3 > number1 && number3 > number2)
    {
        printf("%d is the largest number\n", number3);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
    return 0;
}



// check if the number is even or odd
#include <stdio.h>
int main()
{

    int number;
    if (number % 2 == 0)
    {
        printf("%d is even", number);
    }
    else
    {
        printf("%d is odd", number);
    }
    return 0;
}



//Logical Operator
//Check the consonant & vowel 
#include<stdio.h>
int main()
{

    char ch;  

    printf("Enter any letter  = ");  
    scanf("%c,&Ch);

    if(ch==a || ch== e || ch== i || ch== o || ch== u ||
        ch==A || ch==E || ch==I || ch==0 || ch==U ||                                               )
        {

          printf("Vowel");
       
    }
          
    else
      printf("Consonant");

}

// find largest numer of 2 numbers
#include <stdio.h>
int main()
{

    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    if (number1 > number2)
    {
        printf("%d is the largest number\n", number1);
    }
    else if (number2 > number1)
    {
        printf("%d is the largest number\n", number2);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
    return 0;
}

//  // check a year is a leap year or not
#include <stdio.h>
int main()
{

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}

//#include<stdio.h>
int main()
{
int mark;
printf("Enter mark : ");
scanf("%d",&mark);

if(mark>100 || mark<0)
printf("invalid mark");

else if(mark>=80 && mark<=100)
printf("A+ 4.0");
else if(mark>=75 && mark<=79)
printf("A 3.75");
else if(mark>=70 && mark<=74)
printf("A- 3.5");
else if(mark>=65 && mark<=69)
printf("B+ 3.25");
else if(mark>=64 && mark<=60)
printf("B 3.00");
else if(mark>=59 && mark<=55)

printf("B- 2.75 ");

else if(mark>=54 && mark<=50)
printf("C+ 2.50 ");

else if(mark>=49 && mark<=45)
printf("C 2.25 ");

else if(mark>=44 && mark<=40)
printf("D 2.00");
else
printf("F 0”);
}
//Bitwise Operator  
#include<stdio.h>
    int main()
{
    
int a = 32;
int b = 12;  
int c;

    c = a&b;
    printf("a&b = %d\n",c);

    c = a|b;
    printf("a|b = %d\n",c);

    c = a^b;
    printf("a^b = %d\n",c);
    


}

//Check the letter vowel or Consonant
#include<stdio.h>
int main()
{
   
    char ch;  
    printf("Enter any letter : " );
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||  
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) 
    {
         printf("Vowel");
    }
       
    else
    {
         printf("Consonant");

    }
       
    

}


//To check the digit spell
#include<stdio.h>
int main()
{

    int digit;  
    printf("Enter any digit  = "); 
    scanf("%d",&digit);  

    switch(digit)
    {

       case 0:
              printf("Zero\n");  
    
       case 1:  
           printf("One\n");
       case 2: 
            printf("Two\n");
       case 3:  
            printf("Three\n");
         default:  
     printf("not a valid number");



    }

   

}

//To check the letter vowel or consonant  
#include<stdio.h>
int main()
{
    char ch;  
    printf("Enter any letter  :  ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
        printf("Vowel\n");
        break;
     
     case 'e':
        printf("Vowel\n");
        break;

        case 'i':
        printf("Vowel\n");
        break;
        case 'o':
        printf("Vowel\n");
        break;
        case 'u':
        printf("Vowel\n");
        break;

         case 'A':
        printf("Consonant\n");
        break;
     
     case 'E':
        printf("Consonant\n");
        break;

        case 'I':
        printf("Consonant\n");
        break;
        case 'O':
        printf("Consonant\n");
        break;
        case 'U':
        printf("Consonant\n");
        break;



    default:
         printf("Invalid Letter");
         break;
    }



}
