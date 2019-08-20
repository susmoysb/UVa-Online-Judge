#include<bits/stdc++.h>
using namespace std;
int i ;
long long H(int n)
{
    long long res = 0;
    for(i = 1; i <= sqrt(n); i=i+1 )
    {
        res = (res + n/i);
    }
    return (res+(res/2));
}
int main()
{
    long long int tc,i,sum;
    int a;
    scanf("%lld",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&a);
        sum=H(a);
        printf("%lld\n",sum);
    }
    return 0;
}
