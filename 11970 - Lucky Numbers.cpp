#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,t;
    int n,x,a,c=1;
    int ar[100000],i,k,p;
    double m,b;
    scanf("%d",&t);
    for(i=j=1;j<=t;j++)
    {
        scanf("%d",&n);
        k=0;
        for(i=1;i<=sqrt(n);i++)
        {
            x=n-(i*i);

            m=(double)x/i;
            a=m;

            b=m-a;

            if(b>0)
            {
                continue;
            }
            else if(x!=0)
            {
                ar[k]=x;
                k++;
            }

        }

        printf("Case %d: ",c);
        for(p=k-1;p>=0;p--)
        {
            printf("%d",ar[p]);
            if(p!=0)
            {
                printf(" ");
            }
        }
        printf("\n");
        c++;

    }
    return 0;
}
