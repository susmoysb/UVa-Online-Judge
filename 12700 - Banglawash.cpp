#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[11];
    int i,j,n,m,a=0,b=0,w=0,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        getchar();
        for(j=0;j<m;j++)
        {
            scanf("%c",&s[j]);
        }

        for(j=0;j<m;j++)
        {
            if(s[j]=='A') a++;
            else if(s[j]=='B') b++;
            else if(s[j]=='W') w++;
            else if(s[j]=='T') t++;

        }
        //printf("a=%d b=%d w=%d t=%d \n",a,b,w,t);

        if(a==m) printf("Case %d: ABANDONED\n",i);
        else if(b==w) printf("Case %d: DRAW %d %d\n",i,b,t);
        else if(w==0 && t==0 && b>0) printf("Case %d: BANGLAWASH\n",i);
        else if(b==0 && t==0 && w>0) printf("Case %d: WHITEWASH\n",i);
        else if(b>w) printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else if(w>b) printf("Case %d: WWW %d - %d\n",i,w,b);


        a=0;b=0;w=0;t=0;

    }

    return 0;
}
