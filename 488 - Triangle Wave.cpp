#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l;
    int t,ti;
    int a,b;
    cin >> t ;
    for(ti=1;ti<=t;ti++)
    {
        cin >> a >> b ;
        for(k=1;k<=b;k++)
        {
            for(i=1;i<=a;i++)
            {
                for(j=i;j>=1;j--)
                {
                    cout << i ;
                }
                cout << endl;
            }
            for(i=a-1;i>=1;i--)
            {
                for(j=i;j>=1;j--)
                {
                    cout << i ;
                }
                cout << endl;
            }
            if(k!=b)
            {
                cout << endl;
            }
        }
        if(ti!=t)
        {
            cout << endl;
        }
    }

    return 0;
}
