#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,sum=0,butts=0;
    while(scanf("%lld%lld",&n,&k)==2)
    {
        sum = butts = n ;
        while(butts>0)
        {
            sum=sum+butts/k;
            butts = n/k + n%k ;
            n = butts ;
            if(n/k==0)
            {
                break;
            }
        }
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
