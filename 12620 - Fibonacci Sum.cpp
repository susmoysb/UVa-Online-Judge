#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,sum=0,f1=0,s1=1,f,ans=0;
    long long int i,j,k,t;

    scanf("%lld",&t);

    for(i=1; i<=t; i++)
    {

        scanf("%lld %lld",&n,&m); /// after 96 it shows garbage

        for(k=n; k<=m; k++)
        {
            if(k==1)
            {
                ans=ans+1;
                continue;
            }

            for(j=2; j<=k; j++)
            {
                sum=0;

                f=f1+s1;
                sum=sum+f%100;

                f1=s1;
                s1=f;
            }

            ans=ans+sum;

            sum=0;
            f1=0;
            s1=1;

        }

        cout << ans << endl;

        sum=0;
        f1=0;
        s1=1;
        ans=0;

    }


    return 0;
}
