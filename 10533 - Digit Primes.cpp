#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t1,t2,m,sum=0,ctr=0;;
    long long int n,ni;
    long long int i,j,k,p=0,q=0,a;
    scanf("%lld",&n);
    for(ni=1; ni<=n; ni++)
    {
        ctr=0;
        scanf("%lld %lld",&t1,&t2);
        if(t1%2==0)
        {
            m=t1+1;
        }
        else
        {
            m=t1;
        }

        for(i=m; i<=t2; i+=2)
        {
            p=q=sum=0;
            for(j=3; j<=sqrt(i); j+=2)
            {
                if(i%j==0)
                {
                    p=5;
                    break;
                }
            }
            a=i;

            if(p!=5)
            {
                while(a!=0)
                {
                    sum=sum+a%10;
                    a=a/10;
                }

                if(sum!=2 && sum%2==0)
                {
                    continue;
                }
                else
                {
                    for(k=3; k<=sqrt(sum); k+=2)
                    {
                        if(sum%k==0)
                        {
                            q=5;
                            break;
                        }
                    }
                    if(q!=5)
                    {
                        ctr++;
                    }

                }
            }
        }
        printf("%lld\n",ctr);
    }

    return 0;
}
