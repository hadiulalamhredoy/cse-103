// I-Welcome for you with Conditions
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a >=b)
    {
        printf("Yes");
    }


    else{
            printf("No");
    }
}
//J-Multiples  
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

   if( a%b == 0 || b%a == 0)
   {
       printf("Multiples");
   }
   else
   {
      printf("No Multiples");
   }
}





//K-Min Max 
#include<stdio.h>
int main()
{
     int a,b,c;
     scanf("%d %d %d",&a , &b , &c);
     //Minimum
     if(a <= b  &&  a <= c )
     {
         printf("%d ",a);
     }
     else  if(b <= a  &&  b <=  c)
     {
         printf("%d ",b);
     }

     else if(c <= a && c <=b)
     {
         printf("%d ",c);
     }

    //Maximum

      if(a >= b  &&  a >= c)
     {
         printf("%d",a);
     }
     else  if(b >= a   &&   b >= c)
     {
         printf("%d",b);
     }

     else if( c >= a  &&   c >= b)
     {
         printf("%d",c);
     }

        return  0;
}

//M- Capital or Digit
#include<stdio.h>
int main()
{
        char ch;
        scanf("%c",&ch);
        if(ch>='0' && ch <='9')
        {
            printf("IS DIGIT");
        }

         else{
              printf("ALPHA\n");
              if(ch>='a'  && ch<='z')
              {
                  printf("IS SMALL");
              }
              else {
                  printf("IS CAPITAL");

              }

         }
}


//N-char  
#include<stdio.h>
int main()
{
        char ch;
        scanf("%c",&ch);
        if(ch>='a' && ch<='z') {
                ch = ch -32;
                printf("%c",ch);

        }

        else {

                ch  = ch+32;
                printf("%c",ch);
        }
}


//P-First Digit  
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int b = n/1000;
    if(b % 2 == 0)
    {
        printf("EVEN");
    }
    else{
          printf("ODD");
    }




    }

