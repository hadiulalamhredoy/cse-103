/*              1
               1 2
              1 2 3
*/
#include <stdio.h>

int main()
{
    int row , col , n , spc , k ;
    printf("Enter your value for n please \n");
    scanf("%d" , &n);

    spc = (n + 4) - 1;
    printf("Value of n is %d \n" , n);
    printf("Your pattern looks like this\n");
    for(row = 1 ; row <= n ; row++)
    {
        for(k = spc ; k >= 1 ; k--)
        {
             printf(" ");
        }
            for(col = 1 ; col <= row ; col++)
            {
                printf("%d " , col);
            }
        printf("\n");
        spc--;
    }
    return 0;
}
    // This the END of this program.
    // Thank You.

