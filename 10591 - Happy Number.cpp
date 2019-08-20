#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,sum=0,a,b=10,c,d;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        d=a;
        if(a==1 || a==-1)
        {
            printf("Case #%lld: %lld is a Happy number.\n",i,d);
        }
        else if(a==2 || a==-2 || a==3 || a==-3)
        {
            printf("Case #%lld: %lld is an Unhappy number.\n",i,d);
        }
        else
        {
            while(b>9)
            {
                while(a!=0)
                {
                    c=a%10;
                    sum=sum+c*c;
                    a=a/10;
                }
                b=sum;
                a=b;
                sum=0;
            }
            if(b==1)
            {
                printf("Case #%lld: %lld is a Happy number.\n",i,d);
            }
            else
            {
                printf("Case #%lld: %lld is an Unhappy number.\n",i,d);
            }

        }
        sum=0;
        b=10;

    }

    return 0;

}
