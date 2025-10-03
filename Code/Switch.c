//Number of Digit  
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


  //To find the vowel  & consonant
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

  //To find the capital  & small  letter  
  #include<stdio.h>
int main()
{
     char ch;  
     printf("Enter any letter :   ");  
     scanf("%c",&ch);
     switch(ch)
     {
          case 'a':
          printf("Small letter\n");
          break;
          case 'e':
              printf("Small letter\n");  
          break;
     
          case 'A':
          printf("Capital letter\n");  
          break;
          case 'E':  
          printf("Capital letter\n");
          break;
          default:  
          printf("Not a valid letter");  
     }

    }

  //Temperture Converter  
  #include<stdio.h>
int main()
{
     int choice;
     float temp,convertedTemp;
     printf("Temperature Conversion menu\n");  
     printf("1.Farenheit to Celcuis\n");
     printf("2.Celcuis to Farenheit\n");
     printf("Enter your choice");
     scanf("%d",&choice);

     switch (choice)
     {
         case 01:  
         {
            printf("Enter the Farenheit Temperature : ");
            scanf("%f",&temp);
            convertedTemp = (temp-32) /1.8; 
            printf("The Temperature in  celsius is  :%f\n",convertedTemp);
            break;

        }
        
         case 02:  
         {
            printf("Enter the Celcuis Temperature : ");
            scanf("%f",&temp);
            convertedTemp = (1.8*temp) + 32;
            printf("The Temperature in  Farenheit is  :%f\n",convertedTemp);
            break;
            
        }
             default:
             printf("Not a Correct Option");
             break;

     }
     


}

  //Arithmetic Operator  
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

}
