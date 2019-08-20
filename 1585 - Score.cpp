#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc ;
    int i,j,sum ;
    string s;
    cin >> tc ;
    getchar();
    while(tc--)
    {
        j = 1 ;
        sum = 0 ;
        cin >> s ;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='O')
            {
                sum = sum + j;
                j++ ;
            }
            else if(s[i]=='X')
            {
                j = 1 ;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
