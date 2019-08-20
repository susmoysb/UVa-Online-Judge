#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int first=0,second=1,fibo,i,sum=0,n;
    while(scanf("%lld",&n)==1)
    {
        for(i=0; i<=n; i++)
        {
            sum=0;
            fibo=first+second;
            sum=sum+fibo;
            first=second;
            second=fibo;

        }
        printf("%lld\n",sum);

        first=0;
        second=1;
        sum=0;

    }
    return 0;

}
