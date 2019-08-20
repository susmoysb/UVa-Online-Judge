#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1055],p[1055],ch;
    int i,j,k,l,m=0;

    while(gets(s))
    {
        if(strcmp(s,"*")==0)
        {
            break;
        }

        l=strlen(s);

        for(i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                p[i]=s[i]+32;
            }
            else
            {
                p[i]=s[i];
            }
        }

        for(i=0;i<l;i++)
        {
            if(p[i]>='a' && p[i]<='z')
            {
                ch=p[i];
                k=i;
                break;
            }
        }


        for(j=k+1;j<l;j++)
        {
            if(p[j]==ch && p[j-1]==' ')
            {
                continue;
            }
            else if(p[j]!=' ' && p[j-1]==' ' && p[j]!=ch)
            {
                m=5;
                break;
            }
        }

        if(m!=5)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }

        for(j=0;j<l;j++)
        {
            p[j]='\0';
        }
        m=0;

    }


    return 0;
}
