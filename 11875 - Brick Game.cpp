#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        int a[m];
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[j]);
        }

        //printf("Case %d: %d\n",i,a[m/2+1]);
        for(j=1;j<=m;j++)
        {
            printf("Case %d: %d\n",i,a[m/2+1]);
            break;
        }
    }
    return 0;

}
