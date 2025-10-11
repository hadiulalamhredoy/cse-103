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
