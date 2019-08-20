#include<bits/stdc++.h>
using namespace std;
long long int mod(long long int b,long long int p,long long int m)
{
    long long int a;
    if(p==0)
        return 1;
    if(p%2!=0)
    {
        return (mod(b,p-1,m)*(b%m))%m;
    }
    else
    {
        a=mod(b,p/2,m);
        return (a*a)%m;
        //return (mod(b,p/2,m)*mod(b,p/2,m))%m;
    }
}
int main()
{
    long long int a,x,y,n,i,m;
    while(scanf("%lld",&a)==1 && a!=0)
    {
        for(i=1; i<=a; i++)
        {
            scanf("%lld %lld %lld",&x,&y,&n);
            m=mod(x,y,n);
            printf("%lld\n",m);
        }
    }

    return 0;
}
