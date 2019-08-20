#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int n,i,j,l;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        while(gets(s))
        {
            l=strlen(s);
            if(l==0)
            {
                break;
            }

            for(j=0;j<l;j++)
            {
                if(s[j]=='0')
                {
                    printf("O");
                }
                else if(s[j]=='1')
                {
                    printf("I");
                }
                else if(s[j]=='2')
                {
                    printf("Z");
                }
                else if(s[j]=='3')
                {
                    printf("E");
                }
                else if(s[j]=='4')
                {
                    printf("A");
                }
                else if(s[j]=='5')
                {
                    printf("S");
                }
                else if(s[j]=='6')
                {
                    printf("G");
                }
                else if(s[j]=='7')
                {
                    printf("T");
                }
                else if(s[j]=='8')
                {
                    printf("B");
                }
                else if(s[j]=='9')
                {
                    printf("P");
                }
                else
                {
                    printf("%c",s[j]);
                }
            }

            printf("\n");
        }
        if(i!=n)
        {
            printf("\n");
        }

    }
    return 0;

}
