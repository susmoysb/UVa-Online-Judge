#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,p,sum;
    while(scanf("%lf%lf",&n,&p)==2)
    {

        sum=pow(p,(1/n));

        printf("%.0lf\n",sum);
    }
    return 0;
}
