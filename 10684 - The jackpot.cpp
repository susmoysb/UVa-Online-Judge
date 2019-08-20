#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100005],i,sum=0,m=-1;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }

        for(i=0; i<n; i++)
        {
            sum=sum+a[i];
            if(sum<=0)
            {
                sum=0;
            }
            else
            {
                if(sum>m)
                {
                    m=sum;
                }
            }

        }


        if(m<=0)
        {
            printf("Losing streak.\n");
        }
        else if(m>0)
        {
            printf("The maximum winning streak is %lld.\n",m);
        }

        sum=0;
        m=-1;

    }
    return 0;
}
