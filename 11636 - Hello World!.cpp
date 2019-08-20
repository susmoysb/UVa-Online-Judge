#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,j=1,k=0,sum;
    while(scanf("%d",&a)==1 && a>=0)
    {
        if(a==0 || a==1)
        {
            sum=0;
            printf("Case %d: %d\n",j,sum);
        }
        else if(a==2)
        {
            sum=1;
            printf("Case %d: %d\n",j,sum);
        }
        else
        {
            sum = 1 ;
            while(a>sum)
            {
                sum = sum * 2 ;
                k++;
            }
            printf("Case %d: %d\n",j,k);
        }


        k=0;
        j++;
    }
    return 0;


}
