#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,d,sum=0,i;

    while(scanf("%lld %lld",&s,&d)==2)
    {
        sum=0;
        for(i=s;i<=d;i++)
        {
            sum=sum+i;
            if(sum>=d)
            {
                break;
            }
        }

        printf("%lld\n",i);
    }


    return 0;
}
