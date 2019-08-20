#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,i,j,m,sum=0,count=0,sl;
    sp1:while(scanf("%lld",&a)==1)
    {
        count=0;
        sum=0;

        for(i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                cout << a << " is not prime." << endl;
                goto sp1;
            }
        }
        b=a;
        while(a!=0)
        {
            sum=sum*10;
            sum=sum+a%10;
            a=a/10;
        }

        sl=sqrt(sum);
        for(j=2;j<=sl;j++)
        {
            if(sum%j==0)
            {
                cout << b << " is prime." << endl;
                goto sp1;
            }
            else
            {
                count++;
            }

        }

        if(count==sl-1 && sum!=b)
        {
            cout << b << " is emirp." << endl;
        }

        else
        {
            cout << b << " is prime." << endl;
        }


        count=0;
        sum=0;

    }

    return 0;
}
