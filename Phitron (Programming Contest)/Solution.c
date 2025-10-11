//Print it 
#include<stdio.h>
int main()
{
    printf("Hello, world! I am learning C programming language. ^_^\n");
    printf("Programming is fun and challenging. /\\/\\/\\\n");
    printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");       
            
    return 0; 
}

//Multipy  
#include<stdio.h>
int main()
{
   long long int a,b,mul;
    scanf("%lld",&a);
    scanf("%lld",&b);
    
    mul = a * b ;
    
    printf("%lld",mul);
    
}


//Divisible

#include<stdio.h>
int main()
{
    int n;  
    scanf("%d",&n);  
    if(n %3 == 0)
    {
        printf("YES\n");
    }
    
    else{
        printf("NO");
    }
    
    
    
}



//Divisible 2

#include<stdio.h> 
int main()
{
    int n;  
    scanf("%d",&n);  
   
    for(int i =1;i<=n; i++)
    {
    if( i % 3 == 0 && i % 7 == 0)
    {
        printf("%d\n",i);
    }
    
      
        
    }
    
   
}


//Shopping
#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    int sub = n - 1000;
    scanf("%d",&sub);
    if(n > 1000)
    {
          printf("I will buy Punjabi\n");
         
        if(sub>=500)
          {
              printf("I will buy new shoes\n");
              printf("Alisa will buy new shoes\n");
              
          }
        
    }
       
        else {
            printf("Bad luck!");
        }     
     
      
        
           return 0;
        
    
}
    
