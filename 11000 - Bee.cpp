#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,ans=1,sum=0,f1=0,s1=1,f,i;

    while(scanf("%lld",&a)==1 && a!=-1)
    {

        sum=0;
        f1=0;
        s1=1;
        if(a==0)
        {
            printf("0 1\n");
            continue;
        }

        for(i=1;i<=a;i++)
        {
            sum=0;
            f=f1+s1;
            sum=sum+f;
            f1=s1;
            s1=f;
            ans=ans+sum;
        }

        printf("%lld %lld\n",ans-sum,ans);
        ans=1;

    }

    return 0;
}
