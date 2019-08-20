#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    double u,v,t,s,a;
    while(scanf("%d",&n)==1 && n!=0)
    {
        i++;
        if(n==1)
        {
            cin >> u >> v >> t ;
            // have to find s and a
            // formulas
            a = (v-u)/t;
            s = ((v*v)-(u*u))/(2*a);

            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        else if(n==2)
        {
            cin >> u >> v >> a ;
            // have to find s and t
            // formulas
            s = ((v*v)-(u*u))/(2*a);
            t = (v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        else if(n==3)
        {
            cin >> u >> a >> s ;
            // have to find v and t
            // formulas
            v = sqrt(((u*u)+2*a*s));
            t = (v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(n==4)
        {
            cin >> v >> a >> s ;
            // have to find u and t
            // formulas
            u = sqrt(((v*v)-2*a*s));
            t = (v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }

    }

    return 0;
}
