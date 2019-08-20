#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000009],a[1000009];
    int i,j=0,jj,l;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]!=' ')
            {
                a[j++]=s[i];
                continue;
            }
            else
            {
                jj=j;
                for(j=jj-1; j>=0; j--)
                {
                    cout << a[j] ;
                }
                cout << " " ;
                j=0;
            }
        }
        jj=j;
        for(j=jj-1; j>=0; j--)
        {
            cout << a[j] ;
        }

        j=0;
        cout << endl;
    }
    return 0;
}
