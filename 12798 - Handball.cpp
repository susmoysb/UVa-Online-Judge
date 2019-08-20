#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x[100],i,j,k=0,count=0;
    while(scanf("%d%d",&a,&b)==2)
    {
        for(i=1;i<=a;i++)
        {
            for(j=0;j<b;j++)
            {
                scanf("%d",&x[j]);
            }

            for(j=0;j<b;j++)
            {
                if(x[j]!=0)
                {
                    count++;
                    continue;
                }
                else
                {
                    break;
                }
            }
            if(count==b)
            {
                k++;
            }
            count=0;
        }
        printf("%d\n",k);
        k=0;

    }
    return 0;

}
