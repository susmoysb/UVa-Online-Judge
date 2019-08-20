#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    double r,n,res,ans,s;
    while(scanf("%lf %lf",&r,&n)==2)
    {

        s=sin (((360/n)*pi)/180);
        res=(n*(r*r)*s)/2;

        printf("%.3lf\n",res);

    }

    return 0;
}
