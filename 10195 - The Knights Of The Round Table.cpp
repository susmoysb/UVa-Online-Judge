#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,ans;
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2.0;
    ans=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf\n",ans);
    return 0;
}
