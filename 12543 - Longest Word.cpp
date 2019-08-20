#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105],lw[105];
    int l,w,m=-99999,i,j,count=0;
    while(scanf("%s",s)==1)
    {
        count=0;
        if(strcmp(s,"E-N-D")==0)
        {
            w=strlen(lw);
            for(j=0;j<w;j++)
            {
                if(lw[j]>='A' && lw[j]<='Z')
                {
                    printf("%c",lw[j]+32);
                }
                else if(lw[j]>='a' && lw[j]<='z' || lw[j]=='-')
                {
                    printf("%c",lw[j]);
                }
            }
            cout << endl;
            break;
        }

        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i]=='-')
            {
                count++;
            }
        }

        if(count>m)
        {
            m=count;
            strcpy(lw,s);
        }


    }
    return 0;
}
