#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[109];
    int i,j,k,l;
    int tc,ti;
    int a,b;
    cin >> tc ;
    getchar();
    for(ti=1;ti<=tc;ti++)
    {
        cin >> s ;
        l=strlen(s);
        if(l==1)
        {
            cout << "NO" << endl;
            continue;
        }

        for(i=0;i<l-1;i++)
        {
            a = s[i]-'0' ;
            b = s[i+1]-'0' ;

            if((b-a)==1)
            {
                continue;
            }
            else
            {

            }

        }

    }

    return 0;
}
