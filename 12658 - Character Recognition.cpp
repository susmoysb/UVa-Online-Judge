#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    int i,j;
    int a,b;
    char s[99][99] ;
    cin >> n ;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4*n;j++)
        {
            cin >> s[i][j] ;
        }
    }

    for(a=b=1;a<=n;a++)
    {
        cout << b ;
        b++ ;
        if(b>3)
        {
            b = 1 ;
        }
    }

    return 0;
}
