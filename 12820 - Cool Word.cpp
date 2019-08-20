#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0,i,j,k,l,p,co;
    int a[30],c=1;
    char s[35];
    while(scanf("%d",&n)==1)
    {
        t++;
        co=0;
        getchar();
        for(j=1; j<=n; j++)
        {
            c=1;
            k=p=0;
            scanf("%s",s);
            l=strlen(s);
            if(l==1)
            {
                continue;
            }
            sort(s,s+l);

            for(i=0;i<l;i++)
            {
                if(s[i]==s[i+1])
                {
                    c++;
                }
                else
                {
                    a[k++]=c;
                    c=1;
                }
            }
            sort(a,a+k);

            for(i=0;i<k-1;i++)
            {
                if(a[i]==a[i+1])
                {
                    p=5;
                    break;
                }
            }

            if(p!=5)
            {
                co++;
            }

        }

        printf("Case %d: %d\n",t,co);

    }

    return 0;
}
