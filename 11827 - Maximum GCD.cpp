#include<bits/stdc++.h>
using namespace std;
int a[99999999] ,ai ;
int main()
{
    char s[1000009],*t ;
    int tc;
    int i,j,k,l;
    int mx ;

    cin >> tc ;
    getchar();
    while(tc--)
    {
        gets(s) ;
        ai=0;
        t = strtok(s," ") ;

        while( t != NULL )
        {
            a[ai++] = atoi(t) ;

            t = strtok(NULL, " ");
        }
        sort(a,a+ai) ;
        k=a[ai-1] ;
        mx = __gcd(k,a[0]) ;
        for(i=1;i<ai-1;i++)
        {
            mx = max(mx,__gcd(k,a[i])) ;
        }
        cout << mx << endl;
    }
    return 0;
}
