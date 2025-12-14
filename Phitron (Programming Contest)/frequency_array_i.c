#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt, cnt1 = 1, cnt2 = 2 ,cnt3= 3;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 0)
        {
            cnt0++;
        }
        else if (a[i] == 1)
        {
            cnt1++;
        }
        else if (a[i] == 2)
        {
            cnt2++;
        }

        else if(a[i]==3)
        {
            cnt3++;
        }
    }

    printf("%d - %d\n",a,cnt1);
    printf("%d - %d\n",b,cnt1);
    printf("%d - %d\n",e,cnt2);
    printf("%d - %d\n",f,cnt1);
    printf("%d - %d\n",h,cnt1);
    printf("%d - %d\n",i,cnt1);
    printf("%d - %d\n",o,cnt1);
    printf("%d - %d\n",r,cnt1);
    printf("%d - %d\n",s,cnt1);
    printf("%d - %d\n",t,cnt1);
    printf("%d - %d\n",v,cnt1);
    printf("%d - %d\n",x,cnt1);
}