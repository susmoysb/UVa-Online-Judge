#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,i,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        s=(c*(a+(a-b)))/(a+b);
        printf("%d\n",s);
    }
    return 0;
}
