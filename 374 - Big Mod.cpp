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
    long long int b,p,m;
    while(scanf("%lld %lld %lld",&b,&p,&m)==3)
    {
        printf("%lld\n",mod(b,p,m));
    }
    return 0;
}
