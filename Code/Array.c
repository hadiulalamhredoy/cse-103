//Declaration of a Array  
#include<stdio.h>
int main()
{

     int ar[5];  
     ar[1] = 20;
     ar[2] = 50;
     ar[3] = 70;  
     ar[4] = 60;  
     ar[5] = 40;  
     printf("%d",ar[5]);


}


//Array initialization  
#include<stdio.h>  
int main()
{

   int x = 10;  
   int ar[] = {10,20,30,40,50}; 
   
   for(int i= 0; i<5; i++)
   {
        printf("%d ",ar[i]);

   }


}


//Sum of all values of an array
#include<stdio.h>  
int main()
{
     int n; 
     scanf("%d",&n);  
     int a[n]; 

     for(int i = 0; i<n; i++)
     {
        scanf("%d",&a[i]); 
     }
     int sum  = 0;  

     for(int i =0; i<n; i++)
     {
        sum = sum + a[i];

     }
            printf("%d",sum);
 

}

//Check odd  or Even  
#include<stdio.h>
int main ()
{
int n;
scanf("%d", &n);
int a[n];
for(int i=0;i<n;i++)
{
        scanf("%d", &a[i]); 
}
     odd = 0;
for(int i=0;i<n;i++)
{
     if(a[i] % 2!=0)
     {
         odd++
     }
}
        
return 0;
}
