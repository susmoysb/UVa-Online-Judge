#include<bits/stdc++.h>
using namespace std;
int main()
{
    double y,ans,p=2;
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>y;

        ans=pow(y,1/p);

        printf("%.0lf\n",ans);
        if(i!=n)
        {
            cout<<endl;
        }

    }
    return 0;
}
