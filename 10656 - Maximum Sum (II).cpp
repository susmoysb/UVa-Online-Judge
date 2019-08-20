#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10005];
    int i,j,si,ei,fl;
    while(scanf("%d",&n)==1 && n!=0)
    {
        fl=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                fl=5;
                si=i;
                break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(a[i]>0)
            {
                ei=i;
                break;
            }
        }
        if(fl!=5)
        {
            cout << "0" << endl;
            continue;
        }
        for(j=si;j<=ei;j++)
        {
            if(a[j]==0)
            {
                continue;
            }
            printf("%d",a[j]);
            if(j!=ei)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

