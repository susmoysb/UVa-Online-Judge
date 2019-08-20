#include<stdio.h>
int main()
{
    long long int i,a,sum=1;
    while(scanf("%lld",&a)==1 && (a>=0))
    {

        for(i=a;i>=0;i--)
        {
            sum=i+sum;
        }
        printf("%lld\n",sum);
        sum=1;

    }
    return 0;
}
