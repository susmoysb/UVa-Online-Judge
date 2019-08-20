#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc , n , i , j , k , cs=1 , counter;
    string s ;
    cin >> tc ;
    while(tc--)
    {
        counter = 0 ;
        cin >> n ;
        cin >> s ;

        for(i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                i+=2 ;
                counter++ ;
            }
        }
        printf("Case %d: %d\n",cs++ , counter) ;
    }
    return 0;
}
