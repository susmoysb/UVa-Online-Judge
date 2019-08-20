#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n,i,sum=1,j=0;
    while(scanf("%d",&n)==1)
    {
        j++;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                sum=sum*a[i];
            }
        }
        printf("Case #%d: The maximum product is %d.\n",j,sum);
        sum=1;
    }
    return 0;
}
