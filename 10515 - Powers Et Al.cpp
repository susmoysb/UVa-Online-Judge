#include<bits/stdc++.h>
using namespace std;

long long int mod(long long int b,long long int p,long long int m)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {
        return (mod(b,p/2,m)*mod(b,p/2,m))%m;
    }
    else
    {
        return (mod(b,p-1,m)*(b%m))%m;
    }
}
int main()
{
    long long int b,p,m=10;
    while(scanf("%lld %lld",&b,&p)==2)
    {
        if(b==0 && p==0)
        {
            break ;
        }
        printf("%lld\n",mod(b,p,m));
    }
    return 0;
}

