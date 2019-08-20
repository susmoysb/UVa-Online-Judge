#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,k,z=0;
    char s[1000];

    int m,a,r,g,i,t,count;

    scanf("%d",&n);
    getchar();
    for(j=1;j<=n;j++)
    {
        scanf("%s",s);
        m=0;a=0;r=0;g=0;i=0;t=0;
        count=0;
        for(k=0;k<strlen(s);k++)
        {
            if(s[k]=='M')
            {
                m++;
            }
            else if(s[k]=='A')
            {
                a++;
            }
            else if(s[k]=='R')
            {
                r++;
            }
            else if(s[k]=='G')
            {
                g++;
            }
            else if(s[k]=='I')
            {
                i++;
            }
            else if(s[k]=='T')
            {
                t++;
            }
        }

        while(z==0)
        {

            if(m>=1 && a>=3 && r>=2 && g>=1 && i>=1 && t>=1)
            {
                count++;
            }
            else
            {
                break;
            }

            m=m-1;
            a=a-3;
            r=r-2;
            g=g-1;
            i=i-1;
            t=t-1;

        }

        printf("%d\n",count);
    }

    return 0;
}

