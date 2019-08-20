#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,v,m;
    while(scanf("%d%d",&a,&b)==2&&a!=-1&&b!=-1)
    {
        v=abs(a-b);
        if(v>=50)
        {
            m=100-v;
            printf("%d\n",m);
        }
        else
        {
            printf("%d\n",v);
        }
    }
    return 0;
}
