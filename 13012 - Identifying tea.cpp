#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0;
    int a[5];
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=5;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=5;i++)
        {
            if(a[i]==n)
            {
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
