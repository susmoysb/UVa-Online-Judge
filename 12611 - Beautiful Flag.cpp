#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,ek=1;
    int r,l,w,lrw,ll,rl;
    double a,ww;
    cin >> n ;
    for(i=1;i<=n;i++)
    {
        cin >> r ;

        l = 5*r ;
        a=l;
        ww=a*0.6;
        w=ww;

        lrw=w/2;

        ll=(double)l*((double)45/100.0);
        rl=(double)l*((double)55/100.0);

        printf("Case %d:\n",i);
        cout << -1*ll << " " << lrw << endl;
        cout << rl << " " << lrw << endl;
        cout << rl << " " << -1*lrw << endl;
        cout << -1*ll << " " << -1*lrw << endl;

    }
    return 0;
}
