#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[13],i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<13;j++)
        {
            scanf("%d",&a[j]);
        }

        if(a[0]<=0||a[1]<=0||a[2]<=0||a[3]<=0||a[4]<=0||a[5]<=0||a[6]<=0||a[7]<=0||a[8]<=0||a[9]<=0||a[10]<=0||a[11]<=0||a[12]<=0)
        {
            printf("Set #%d: No\n",i);
        }
        else
        {
            printf("Set #%d: Yes\n",i);
        }
    }

    return 0;
}
