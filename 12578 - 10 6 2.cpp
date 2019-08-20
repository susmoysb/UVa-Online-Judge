#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    double l,w,r,ans,res;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        scanf("%lf",&l);
        w=(double)l*((double)60/100);
        r=(double)l*((double)20/100);

        res=pi*r*r;
        ans=(w*l)-res;
        printf("%.2lf %.2lf\n",res,ans);

    }
    return 0;
}
