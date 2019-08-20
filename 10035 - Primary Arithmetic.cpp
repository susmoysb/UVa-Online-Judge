#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,sum=0,i,j,count=0;
    while(scanf("%lld%lld",&a,&b)==2)
    {

        if(a==0 && b==0)
        {
            break;
        }
        while(a!=0 || b!=0)
        {
            i=a%10;
            j=b%10;
            a=a/10;
            b=b/10;
            sum=sum+i+j;

            if(sum>=10)
            {
                count++;
            }
            sum=sum/10;

        }

        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count==1)
        {
            printf("%lld carry operation.\n",count);
        }
        else
        {
            printf("%lld carry operations.\n",count);
        }

        count=0;
        sum=0;

    }
    return 0;


}
