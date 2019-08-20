#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105];
    int i,j,k,m,a=0;
    int g,l;
    while(scanf("%d",&g)==1 && g!=0)
    {
        getchar();
        scanf("%s",s);
        l=strlen(s);

        a=0;
        j=0;
        for(i=1;i<=g;i++)
        {
            j=j+l/g;
            m=j;
            for(k=m-1;k>=a;k--)
            {
                printf("%c",s[k]);
            }

            a=a+l/g;

        }
        printf("\n");
    }

    return 0;
}
