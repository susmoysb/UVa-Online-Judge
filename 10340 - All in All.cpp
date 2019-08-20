#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000005],t[1000005];

    int i,j,count=0;
    int ls,lt;
    while(scanf("%s %s",s,t)==2 )
    {
        ls=strlen(s);
        lt=strlen(t);
        for(i=0; i<ls; i++)
        {
            for(j=0; j<lt; j++)
            {
                if(s[i]==t[j])
                {
                    i++;
                    count++;
                }
            }
            break;
        }
        if(count==ls)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        count=0;
    }

    return 0;

}
