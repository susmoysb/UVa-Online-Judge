#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,l,i=0,k,c;
    while(scanf("%lld%lld",&a,&l)==2)
    {
        c=a;
        i++;
        if(a<0 && l<0)
        {
            break;
        }
        for(k=1;k!=0;k++)
        {
            if(a==1)
            {
                break;
            }
            if(a%2==0)
            {
                a=a/2;
            }
            else
            {
                a=3*a+1;
            }
            if(a>l)
            {
                break;
            }
        }

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,c,l,k);




    }

    return 0;
}
