#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t,n,i,l,zero,minus_one,plus_one,v1,v2;
    string s ;
    int a[30] ;

    cin >> t ;
    while(t--)
    {
        zero=0 ;
        minus_one = 0 ;
        plus_one = 0 ;
        memset(a,0,sizeof(a)) ;
        cin >> n ;
        while(n--)
        {
            cin >> s ;
            l = s.length() ;
            a[s[0]-97]-- ;
            a[s[l-1]-97]++ ;
        }
        for(i=0; i<26; i++)
        {
            if(a[i]==0)
            {
                zero++ ;
            }
        }
        if(zero==26)
        {
            cout << "Ordering is possible." << endl;
        }
        else
        {
            for(i=0; i<26; i++)
            {
                if(a[i]<0)
                {
                    minus_one++ ;
                    v1 = a[i] ;
                }
                else if(a[i]>0)
                {
                    plus_one++ ;
                    v2 = a[i] ;
                }
            }
            if(minus_one==1 && plus_one==1 && v1==-1 && v2==1)
            {
                cout << "Ordering is possible." << endl;
            }
            else
            {
                cout << "The door cannot be opened." << endl;
            }
        }
    }
    return 0;
}
