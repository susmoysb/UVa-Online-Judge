#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,i,sum=0;
    while(scanf("%lld",&a)==1)
    {
        for(i=1;i<=a;i++)
        {
            sum=sum+(i*i*i);
        }
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
