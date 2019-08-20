#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a,b,c,res,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);

        res=b+c;

        for(j=1;res>a;j++)
        {
            res=res-a;
        }


        printf("Case %lld: %lld\n",i,res);
        res=0;

    }
    return 0;
}
