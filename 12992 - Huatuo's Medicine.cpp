#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=a*2-1;
        printf("Case #%d: %d\n",i,b);
    }
    return 0;
}
