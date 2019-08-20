#include<bits/stdc++.h>
using namespace std;
int main()
{
    double u,v,w;
    double s,x,y;
    while(cin >> u >> v >> w)
    {
        if(u==0 || v==0 || w==0)
        {
            cout << "-1.000" << endl;
            continue;
        }
        s = (u+v+w)/2.0 ;
        x = s*(s-u)*(s-v)*(s-w) ;

        if(x<0)
        {
            cout << "-1.000" << endl;
            continue;
        }

        y = (4/3.0) * sqrt(x) ;
        if(y==0)
        {
            cout << "-1.000" << endl;
        }
        else
        {
            printf("%.3lf\n",y);
        }
    }
    return 0;
}
