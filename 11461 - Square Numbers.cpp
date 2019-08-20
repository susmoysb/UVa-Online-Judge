#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,sum,count=0;
    while(scanf("%d%d",&a,&b)==2&&(a!=0||b!=0))
    {
        for(i=a;i<=b;i++)
        {
            sum=sqrt(i);

            if(sum*sum==i)
            {
                count++;
            }

        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
