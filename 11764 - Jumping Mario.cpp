#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,a[100],high=0,low=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<m-1;j++)
        {
            if(a[j]<a[j+1])
            {
                high++;
            }
            else if(a[j]>a[j+1])
            {
                low++;
            }

        }
        printf("Case %d: %d %d\n",i,high,low);

        high=0;
        low=0;
    }
    return 0;

}
