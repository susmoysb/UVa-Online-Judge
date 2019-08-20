#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int i,j,k,l,m,n,o,p;
    while(scanf("%s",s)==1)
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='[')
            {
                for(j=i+1;s[j]!='\0';j++)
                {
                    if(s[j]==']')
                    {
                        break;
                    }
                    printf("%c",s[j]);
                }
                for(k=0;s[k]!='[';k++)
                {
                    printf("%c",s[k]);
                }

                for(l=0;s[l]!='\0';l++)
                {
                    if(s[l]==']')
                    {
                        for(m=l+1;s[m]!='\0';m++)
                        {
                            printf("%c",s[m]);
                        }
                    }
                    else
                    {
                        continue;
                    }
                }

            }
            else
            {
                continue;
            }

            for(n=0;s[n]!='\0';n++)
            {
                if(s[n]!='[')
                {
                    if(s[n]==']')
                    {

                    }
                }
                else
                {
                    continue;
                }

            }


        }
        printf("\n");
    }
    return 0;
}
