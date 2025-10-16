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

#define N 10

int main()
{
    int a[N], i, even = 0, odd = 0;

    printf("Enter %d integer numbers\n", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("\n\nEven numbers in the array are ...\n");
    for(i = 0; i < N; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d\n", a[i]);
            even++;
        }
    }

    printf("\nOdd numbers in the array are ...\n");
    for(i = 0; i < N; i++)
    {
        if(a[i] % 2 != 0)
        {
            printf("%d\n", a[i]);
            odd++;
        }
    }

    printf("\n\nTotal Even numbers: %d", even);
    printf("\nTotal Odd numbers: %d\n", odd);

    printf("\n");

    return 0;
}
