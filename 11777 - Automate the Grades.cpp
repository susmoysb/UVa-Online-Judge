#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t1,t2,fn,att,sum;
    int ct[3];
    int i,j,n,m;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&t1,&t2,&fn,&att);

        for(j=0;j<3;j++)
        {
            scanf("%d",&ct[j]);
        }
        sort(ct,ct+3);
        m=(ct[1]+ct[2])/2;

        sum=t1+t2+fn+att+m;

        if(sum>=90)
        {
            printf("Case %d: A\n",i);
        }
        else if(sum>=80)
        {
            printf("Case %d: B\n",i);
        }
        else if(sum>=70)
        {
            printf("Case %d: C\n",i);
        }
        else if(sum>=60)
        {
            printf("Case %d: D\n",i);
        }
        else if(sum<60)
        {
            printf("Case %d: F\n",i);
        }



    }

    return 0;
}
