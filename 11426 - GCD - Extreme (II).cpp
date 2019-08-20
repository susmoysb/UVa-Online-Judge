#include<bits/stdc++.h>
using namespace std;
unsigned long long int gcd(long long int a, long long int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    unsigned long long int G,N;
    unsigned long long int i,j;
    while(scanf("%llu",&N)==1 && N!=0)
    {
        G=0;
        for(i=1; i<N; i++)
        {
            for(j=i+1; j<=N; j++)
            {
                G+=gcd(i,j);
            }
        }

        printf("%llu\n",G);
    }
    return 0;
}

