#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,m,n,sum=0,i,j,ans=0;
    while(scanf("%lld%lld",&m,&n)==2)
    {

        if(m==0 && n==0)
        {
            break;
        }
        for(i=n;i>=m;i--)
        {
            j=i;
            while(j>0)
            {
                a=j%10;
                ans=ans+a;
                j=j/10;
            }
            sum=sum+ans;
            ans=0;

        }
        printf("%lld\n",sum);
        sum=0;
        ans=0;
    }
    return 0;

}
