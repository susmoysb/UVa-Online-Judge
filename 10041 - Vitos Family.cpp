#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, i, j, k ,sum =0;
    int r, a[999] ;
    cin >> tc ;
    while(tc--)
    {
        cin >>  r ;
        sum = 0 ;
        for(i=0; i<r; i++)
        {
            cin >> a[i] ;
        }
        if(r==1)
        {
            cout << "0" << endl;
            continue ;
        }
        sort(a,a+r) ;

        if(r%2==0)
        {
            j = a[r/2-1] ;
            for(i=0; i<r; i++)
            {
                if(i==r/2-1)
                {
                    continue ;
                }
                sum = sum + abs(j-a[i]) ;
            }
        }
        else
        {
            j = a[r/2] ;
            for(i=0; i<r; i++)
            {
                if(i==r/2)
                {
                    continue ;
                }
                sum = sum + abs(j-a[i]) ;
            }
        }

        cout << sum << endl;

    }
    return 0;
}
