#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if((a+b)>c && (a+c)>b && (b+c)>a) /// triangle
        {
            if(a==b && b==c)
            {
                printf("Case %d: Equilateral\n",i);
            }
            else if(a==b || b==c || a==c)
            {
                printf("Case %d: Isosceles\n",i);
            }
            else
            {
                printf("Case %d: Scalene\n",i);
            }
        }
        else
        {
            printf("Case %d: Invalid\n",i);
        }
    }
    return 0;
}
