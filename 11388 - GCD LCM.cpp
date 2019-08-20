#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,ti;
    long long int a,b;
    long long int gcd,lcm;
    cin >> t ;
    for(ti=1;ti<=t;ti++)
    {
        cin >>  a >> b ;

        gcd=__gcd(a,b);
        lcm=(a*b)/gcd;
        if(a==gcd && b==lcm)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
