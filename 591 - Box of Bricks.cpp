#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[50],i,j=1,n,sum=0,res,ans=0;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        res=sum/n;
        for(i=0;i<n;i++)
        {
            if(a[i]>res)
            {
                ans=ans+(a[i]-res);
            }


        }
        printf("Set #%d\n",j);
        printf("The minimum number of moves is %d.\n\n",ans);

        ans=0;
        sum=0;
        j++;
    }

    return 0;
}
