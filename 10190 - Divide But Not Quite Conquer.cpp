#include<bits/stdc++.h>
using namespace std;

long long int a[1<<32];
int main()
{
    int n,m;
    int i=0,ii,b=0;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(m==1 || n==1 || m==0 || n==0)
        {
            printf("Boring!\n");
            continue;
        }
        i=0;
        b=0;
        a[i]=n;
        i++;
        while(n!=1)
        {
            if(n%m==0)
            {
                n=n/m;
                a[i]=n;
                i++;
            }
            else
            {
                b=5;
                break;
            }
        }
        ii=i;
        if(b==5)
        {
            printf("Boring!\n");
        }
        else
        {
            for(i=0;i<ii;i++)
            {
                printf("%lld",a[i]);
                if(i!=ii-1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

    }

    return  0;
}
