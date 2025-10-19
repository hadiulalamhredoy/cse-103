
//Say it  
#include<stdio.h>  
int main()
{
    int n; 
    scanf("%d",&n);
    
    for(int i =1; i<=n; i++)
    {
        
        printf("%d. I Want More Assignments\n", i);
        
    }
    
    
    
}


//Is It a Challenge?
#include<stdio.h>
int main ()
{
         int a;
         scanf("%d", &a);
              if(a > 0)
              {
                     for(int i=1;i<=a;i++)
                     {
                             printf("%d\t", i);
                     }
              }
              else 
              {
                     for(int i=a;i<=0;i++)
                     {
                            printf("%d\t", i);
                     }
               }
return 0;

  //Reverse and Odd
  #include<stdio.h>
int main ()
{
  int n;
  scanf("%d", &n);
  int a[n];
          for(int i=0;i<n;i++)
         {
                  scanf("%d ",&a[i]);
         }
         for(int i=n-1;i>=0;i--)
         {  
               if(i % 2 !=0)
               {
                      printf("%d ", a[i]);
               }
         }
return 0;
}

//Sum Sum  
#include<stdio.h>
int main ()
{
     int b;
     scanf("%d", &b);
     int a[b];
     for(int i=0;i<b;i++)
     {
           scanf("%d", &a[i]);
     }
          int sum = 0;
          int sum1 = 0;
     for(int i=0;i<b;i++)
     {
            if(a[i] > 0)
            {
                  sum = sum + a[i];
            }
            else 
            {
                    sum1 = sum1 + a[i];
            }

      }
           printf("%d\t", sum);
           printf("%d\t", sum1);
return 0;
}

//Update and Print

#include<stdio.h>
int main ()
{
        int b;
        scanf("%d", &b);
        int a[b];
        for(int i=0; i<b; i++) {
                scanf("%d", &a[i]);
        }
        int x, v;
        scanf("%d %d", &x,&v);
        if(x<b) {
                a[x]=v;
        }
        for(int i=b-1; i>=0; i--) {
                printf("%d\t", a[i]);
        }
        return 0;
}
