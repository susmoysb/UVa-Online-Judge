#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,area;
    double a=999999999,b=999999999;
    int n,i,j=0;
    double m=10005;
    //double m[10005];
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%lf %lf",&x,&y);

            area=sqrt((x-a)*(x-a)+(y-b)*(y-b));

            //cout << area << endl;

            if(area<=m)
            {
                m=area;
            }
            //m[j]=area;
            //j++;

            a=x;
            b=y;

        }

        //sort(m,m+n);
        if(n==1 || m>=10000)
        {
            cout << "INFINITY" << endl;
        }
        else
        {
            printf("%.4lf\n",m);
        }
    }

    return 0;
}
