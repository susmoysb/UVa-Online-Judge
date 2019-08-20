#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j=0,a,A,ans=0,r=0,b=0;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&a);

        while(b==0)
        {
            A=a;
            r=0;
            while(a!=0)
            {
                r=r*10;
                r=r+a%10;
                a=a/10;
            }

            if(r==A)
            {
                break;
            }
            ans=A+r;
            a=ans;
            j++;

        }

        printf("%lld %lld\n",j,r);
        j=0;
        r=0;

    }
    return 0;

}
