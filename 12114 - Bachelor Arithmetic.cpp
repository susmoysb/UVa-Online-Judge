#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b,s,i=1;
    while(scanf("%lld %lld",&b,&s)==2)
    {
        if(b==0 && s==0)
        {
            break;
        }

        if(b==1)
        {
            printf("Case %lld: :-\\\n",i);
        }
        else if(b>s)
        {
            printf("Case %lld: :-(\n",i);
        }
        else if(b==0 || s==0)
        {
            printf("Case %lld: :-(\n",i);
        }
        else if(b==s || s>b)
        {
            printf("Case %lld: :-|\n",i);
        }

        i++;
    }
    return 0;
}
