#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,n;
    int a,b,c,d,e;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=1;i<=n;i++)
        {

            scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

            if(a>127 && b>127 && c>127 && d>127 && e>127)
            {
                printf("*\n");
            }
            else if(a<=127 && b<=127 && c<=127 && d<=127 && e<=127)
            {
                printf("*\n");
            }
            else if(a<=127 && b>127 && c>127 && d>127 && e>127)
            {
                printf("A\n");
            }
            else if(a>127 && b<=127 && c>127 && d>127 && e>127)
            {
                printf("B\n");
            }
            else if(a>127 && b>127 && c<=127 && d>127 && e>127)
            {
                printf("C\n");
            }
            else if(a>127 && b>127 && c>127 && d<=127 && e>127)
            {
                printf("D\n");
            }
            else if(a>127 && b>127 && c>127 && d>127 && e<=127)
            {
                printf("E\n");
            }

            else
            {
                printf("*\n");
            }


        }
    }
    return 0;

}
