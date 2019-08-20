#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int a,n,i,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=((((((a*567)/9)+7492)*235)/47)-498);
        printf("%d\n",abs((sum/10)%10));
    }
    return 0;
}
