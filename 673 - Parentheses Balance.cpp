#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[150];
    string s;
    int i,j,k,l,fl=0,flag=0;
    int tc;
    cin >> tc ;
    getchar();
    while(tc--)
    {
        fl=flag=0;
        gets(str);
        l = strlen(str) ;
        if(l%2!=0)
        {
            cout << "No" << endl;
            continue ;
        }
        if(l==0)
        {
            cout << "Yes" << endl;
            continue ;
        }
        s=str;
        for(i=0;i<l;i++)
        {
            flag = 0 ;
            if(s[i] == ')')
            {
                flag = 10 ;
                if(s[i-1] == '(')
                {
                    s.erase(i-1,2) ;
                    i=-1;
                    l = s.length() ;
                }
                else
                {
                    fl=5;
                    break;
                }
            }
            else if(s[i] == ']')
            {
                flag = 10 ;
                if(s[i-1] == '[')
                {
                    s.erase(i-1,2) ;
                    i=-1;
                    l = s.length() ;
                }
                else
                {
                    fl=5;
                    break;
                }
            }

        }

        if(flag == 10)
        {
            if(fl == 5)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
