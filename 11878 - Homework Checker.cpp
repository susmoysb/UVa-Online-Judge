#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[15];
    int i,j,k,l;
    int fn,sn,ln,sum1,sum2,sum;
    int counter=0;
    while(gets(s))
    {
        sum=sum1=sum2=0;

        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]!='+' && s[i]!='-')
            {
                sum1=(sum1*10)+(s[i]-'0');
            }
            else
            {
                j=i+1;
                break;
            }
        }
        for(i=j;i<l;i++)
        {
            if(s[i]!='=')
            {
                sum2=(sum2*10)+(s[i]-'0');
            }
            else
            {
                k=i+1;
                break;
            }
        }
        if(s[k]=='?')
        {
            continue;
        }
        else
        {
            for(i=k;i<l;i++)
            {
                sum=(sum*10)+(s[i]-'0');
            }
            if((sum1+sum2)==sum)
            {
                counter++;
            }
            else if((sum1-sum2)==sum)
            {
                counter++;
            }
        }

    }
    cout << counter << endl;

    return 0;
}
