#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,r,d,sb,lb;
    int n,i;
    cin >> n ;
    for(i=1;i<=n;i++)
    {
        cin >> x >> y >> r ;

        d=sqrt(pow(x-0,2) + pow(y-0,2));
        lb=d+r;
        sb=2*r-lb;

        printf("%.2lf %.2lf\n",sb,lb);

    }

    return 0;
}
