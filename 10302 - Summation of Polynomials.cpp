#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,i,sum=0;

    while(scanf("%lld",&x)==1)
    {
        for(i=1;i<=x;i++)
        {
            sum=sum+(i*i*i);
        }
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
