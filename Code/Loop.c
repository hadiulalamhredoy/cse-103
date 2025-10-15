//Print the 1 to 5 Number Using For loop 
#include<stdio.h>
int main()
{
    int i;
    for(i =1;i<=5;i++)
    {
        printf("%d\n",i);
    }
      
    
}
//Print the 100 to 1 Reverse Number Using For loop 
#include<stdio.h>
int main()
{
    int i;
    for(i=100;i<=1;i++)
    {
        printf("%d\n",i);
    }

    
}


//Printing the vaule  
#include<stdio.h>
int main()
{
    for(int i =1; i<=10;i++)
    {
        printf("I Love Programming\n");
    }
    
}

//Print the sum to 1 from n  
#include<stdio.h>
int main()
{

       int n;  
       scanf("%d",&n);  
       int sum  = 0;  
       for(int i=1;i<=n;i++)
       {
           sum  =  sum  + i;

       }
    
         printf("%d\n",sum);  
         
         return 0;

}

// loop with condition  
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 =-0)
        {
            printf("%d-even", i);
        }

        else
        {
        printf("%d-odd",i);
        }
    }
}

//Multipication Table 
#include<stdio.h>  
int main()
{
     int n;  
     scanf("%d",&n); 
     for(int i = 1; i <= 12 ; i++)
     {
        printf("%d * %d = %d\n",n,i,n*i);
     }

}

//Even Numbers
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 1)
    {
        printf("-1");
    }
     for(int i  = 1; i<=n;i++)
     {
           if(i % 2 == 0)
           {
               printf("%d\n",i);
           }

     }


}

//Even,odd,positive & negative 
#include <stdio.h>
int main()
{
    int n;
    int x;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i=1; i<=n;i++)
    {
        scanf("%d",&x);
        if (x%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (x > 0)
        {
            pos++;
        }

        else if (x < 0)
        {
            neg++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
}

//Fixed Password  
#include<stdio.h>  
int main()
{
     int pass;  
     while(scanf("%d",&pass))  
     {  
          if(pass == 1999)
          {

                printf("Correct\n");
                break; 
          }
          else
           {
                printf("Wrong\n");

           }

     }
}

//Max 
#include <stdio.h>
int main()
{
 
    int n;
    scanf("%d", &n);
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        if (val > mx)
        {
            mx = val;
        }
    }
    printf("%d\n", mx);
    return 0;
}

//Digits
#include<stdio.h>  
int main()
{
     int t;  
     scanf("%d",&t);  
     for(int i = 1; i<=t; i++)
     {
         int n;  
         scanf("%d",&n); 
         do
         {
           printf("%d ",n%10);
           n /= 10;
         } while (n !=0);
           printf("\n");       
       }
         return 0;
 
}
