#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,p=0,fl=0,f=0;
    char s[20],pr[20];
    while(cin >> s)
    {
        p=0;
        fl=0;
        f=0;
        strcpy(pr,s);

        l=strlen(s);
        for(j=0,k=l-1; j<=k; j++,k--)
        {
            if(s[j]==s[k])
            {
                continue;
            }
            else
            {
                fl=1;
                break;
            }
        }


        if(fl==0) // palindrome
        {
            for(i=0; i<l; i++)
            {
                if(s[i]=='S' || s[i]=='E' || s[i]=='Z' || s[i]=='2' || s[i]=='3' || s[i]=='5')
                {
                    p=5;
                    break;
                }
            }

            if(p!=5)
            {
                cout << pr << " -- is a mirrored palindrome." << endl;
            }
            else
            {
                cout << pr << " -- is a regular palindrome." << endl;
            }


        }
        else // not palindrome
        {
            for(i=0; i<strlen(s); i++)
            {
                if(s[i]=='3')
                {
                    s[i]='E';
                }
                else if(s[i]=='5')
                {
                    s[i]='Z';
                }
                else if(s[i]=='2')
                {
                    s[i]='S';
                }
            }

            for(j=0,k=l-1; j<=k; j++,k--)
            {
                if(s[j]==s[k])
                {
                    continue;
                }
                else
                {
                    f=1;
                    break;
                }
            }

            //strcpy(d,s);
            //strrev(d);
            if(f==0)
            {
                cout << pr << " -- is a mirrored string." << endl;
            }
            else
            {
                cout << pr << " -- is not a palindrome." << endl;
            }

        }
        cout << endl;

    }

    return 0;
}
