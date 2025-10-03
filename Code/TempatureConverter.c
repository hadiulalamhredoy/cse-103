//Convert to Farenheit from Celcuis
#include<stdio.h>
int main()
{
    float farn,cels;

    printf("Enter Farenheit  = ");
    scanf("%f",&farn);

    cels = (5* farn - 160)/9;

    printf("Celcuis = %.2f\n",cels);


}
//Convert Temperature  Celcuis  from Fareheit
#include<stdio.h>
int main()
{
    float cels,farn;

    printf("Enter Celcuis = ");
    scanf("%f",&cels);

    farn =(cels*1.8)+32;

    printf("Farenheit = %.2f\n",farn);

}


//Convert From  Celcius to  Kelvin
#include<stdio.h>
int main()
{
    float cels,k;
    printf("Enter cels = ");
    scanf("%f",&cels);

    k = cels + 273;

    printf("K  = %f\n",k);
}

//Convert From  Farenheit to  Kelvin
#include<stdio.h>
int main()
{
    float farn,k;
    printf("Enter farn = ");
    scanf("%f",&farn);

    k = (0.556 * farn - 255.21);

    printf("K  = %.2f\n",k);
}


//Convert From Kelvin to  Farenheit
#include<stdio.h>
int main()
{
    float k,farn;
    printf("Enter k = ");
    scanf("%f",&k);

    farn = (1.8*k -523.4);

    printf("farn  = %.2f\n",farn);
}


//Convert From Kelvin to  Centigrade
#include<stdio.h>
int main()
{
    float k,cels;
    printf("Enter k = ");
    scanf("%f",&k);

    cels = (k -273);

    printf("cels  = %.2f\n",cels);
}


//Using menubased Temperature Converter
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

