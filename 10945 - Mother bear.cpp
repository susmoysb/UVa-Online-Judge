#include<bits/stdc++.h>
using namespace std;
char r[10005],s[10005];
int main()
{

    int i,j,k,c1=0,c2=0,l,len,b=0;

    while(gets(r))
    {
        if(strcmp(r,"DONE")==0)
        {
            break;
        }
        for(i=0,j=0;i<strlen(r);i++)
        {
            if(r[i]>='a' && r[i]<='z')
            {
                s[j]=r[i];
                j++;
            }
            else if(r[i]>='A' && r[i]<='Z')
            {
                s[j]=r[i]+32;
                j++;
            }
        }

        l=strlen(s);
        /*len=(l-1)/2;

        if(l%2==0)
        {
            for(i=0,j=l-1;i<=len,j>len;i++,j--)
            {
                if(s[i]==s[j])
                {
                    c1++;
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            for(i=0,j=l-1;i<=len,j>=len;i++,j--)
            {
                if(s[i]==s[j])
                {
                    c2++;
                    continue;
                }
                else
                {
                    break;
                }
            }
        }*/

        for(i=0,j=l-1;i<=j;i++,j--)
        {
            if(s[i]==s[j])
            {
                continue;
            }
            else
            {
                b=5;
                break;
            }
        }

        /*if(c1==len+1)
        {
            cout << "You won't be eaten!" << endl;
        }
        else if(c2==len+1)
        {
            cout << "You won't be eaten!" << endl;
        }*/

        if(b!=5)
        {
            cout << "You won't be eaten!" << endl;
        }
        else
        {
            cout << "Uh oh.." << endl;
        }

        c1=0;c2=0;
        b=0;
        for(k=0;k<l;k++)
        {
            s[k]='\0';
        }

    }

    return 0;
}
