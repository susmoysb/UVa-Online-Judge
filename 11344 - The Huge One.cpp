#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1005];
    int n,m[20],p;
    int i,j,k,sum=0,c=0;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        scanf("%d",&p);
        for(j=0;j<p;j++)
        {
            scanf("%d",&m[j]);
        }

        for(j=0;j<p;j++)
        {
            sum=0;
            for(k=0;k<strlen(s);k++)
            {
                sum=sum*10+s[k]-'0';
                sum=sum%m[j];
            }

            if(sum!=0)
            {
                c=5;
            }
        }

        if(c==5)
        {
            printf("%s - Simple.\n",s);
        }
        else
        {
            printf("%s - Wonderful.\n",s);
        }

        c=0;

    }

    return 0;
}
