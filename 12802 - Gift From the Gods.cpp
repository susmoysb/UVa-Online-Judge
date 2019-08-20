#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,rev=0,i;
    sp1:while(cin >> a )
    {
        rev=0;
        b=a;
        while(b!=0)
        {
            rev=rev*10;
            rev=rev+b%10;
            b=b/10;
        }

        if(a==rev)
        {
            for(i=2;i<=sqrt(rev);i++)
            {
                if(rev%i==0)
                {
                    cout << rev*2 << endl;
                    goto sp1;
                }
            }
            cout << rev*2 << endl;
            return 0;
        }
        else
        {
            cout << a*2 << endl;
        }


    }
    return 0;
}
