#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1005],a[3];
    long long int t,n,m=0,l,p=0;
    long long int i,j,k;

    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        getchar();
        for(j=1;j<=n;j++)
        {
            scanf("%s",s);
            l=strlen(s);
            if(n==1)
            {
                printf("Ordering is possible.\n");

                p=2;
            }
            else if(j==1)
            {
                a[0]=s[l-1];
            }
            else if(j>=2)
            {
                a[1]=s[0];
                if(a[0]==a[1])
                {
                    a[0]=a[1]='\0';
                    a[0]=s[l-1];
                }
                else
                {
                    m=5;
                }
            }


        }

        if(m!=5 && p!=2)
        {
            printf("Ordering is possible.\n");
        }
        else if(m==5)
        {
            printf("The door cannot be opened.\n");
        }

        m=0;p=0;
        a[0]=a[1]='\0';


    }

    return 0;
}
