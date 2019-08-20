#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,sum=0,tc;

    //cin >> tc;
    scanf("%d",&tc);
    for(i=1; i<=tc; i++)
    {
        //cin >> n >> k ;
        scanf("%d %d",&n,&k);

        for(j=1; j<=sqrt(n); j++)
        {
            if(n%j==0)
            {
                if(j%k!=0)
                {
                    sum=sum+j;
                }
                if(j!=(n/j) && (n/j)%k!=0)
                {
                    sum=sum+(n/j);
                }
            }
        }

        printf("%d\n",sum);

        sum=0;
    }
    return 0;

}
