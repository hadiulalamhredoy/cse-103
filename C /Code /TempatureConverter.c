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
//Convert Temperature from Celcuis  from Fareheit
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
