#include<stdio.h>
int main()
{
    signed int a,b,r1,r2,n,i;
    scanf("%u",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%u%u",&a,&b);

        if(a%2==0&&b%2==0)
        {
            if(a>=b)
            {
                r1=(a-b)/2;
                r2=r1+b;
                printf("%u %u\n",r2,r1);
            }
            else
            {
                printf("impossible\n");
            }
        }
        else if(a%2==1&&b%2==1)
        {
            if(a>=b)
            {
                r1=(a-b)/2;
                r2=r1+b;
                printf("%u %u\n",r2,r1);
            }
            else
            {
                printf("impossible\n");
            }
        }

        else
        {
            printf("impossible\n");
        }
    }

    return 0;

}
