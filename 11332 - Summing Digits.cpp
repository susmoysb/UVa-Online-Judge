#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,a,s=0,r=0;
    while(scanf("%lld",&a)==1 && a!=0)
    {
        if(a>=10)
        {
            while(a>=10)
            {

                while(a>0)
                {
                    s=s+a%10;
                    a=a/10;
                }
                a=s;
                s=0;

            }

            printf("%lld\n",a);


        }
        else
        {
            printf("%lld\n",a);
        }


    }
    return 0;
}
