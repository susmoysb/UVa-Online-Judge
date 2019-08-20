#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,an[10005],aq[10005];
    int i,j,k=0;
    int f=0;

    while(scanf("%d %d",&n,&q)==2)
    {
        if(n==0 && q==0)
        {
            break;
        }

        k++;
        for(i=0;i<n;i++)
        {
            scanf("%d",&an[i]);
        }

        sort(an,an+n);

        for(j=1;j<=q;j++)
        {
            scanf("%d",&aq[j]);
        }

        printf("CASE# %d:\n",k);

        for(j=1;j<=q;j++)
        {
            for(i=0;i<n;i++)
            {
                if(aq[j]==an[i])
                {
                    f=2;
                    break;
                }
                else
                {
                    f=5;
                }
            }

            if(f==2)
            {
                printf("%d found at %d\n",aq[j],i+1);
            }
            else
            {
                printf("%d not found\n",aq[j]);
            }

            f=0;

        }

    }



    return 0;
}
