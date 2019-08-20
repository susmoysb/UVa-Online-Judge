#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[999],i,j,n,m,count=0;
    double avg=0,res,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        for(j=1;j<=m;j++)
        {

            scanf("%d",&a[j]);

        }

        for(j=1;j<=m;j++)
        {
            sum=sum+a[j];
        }
        avg=(double)(sum/m);

        for(j=1;j<=m;j++)
        {
            if(a[j]>avg)
            {
                count++;
            }
            else
            {
                continue;
            }

        }

        res=(double)(count*100)/m;
        printf("%.3lf%%\n",res);


        count=0;
        sum=0;
        avg=0;
    }


}
