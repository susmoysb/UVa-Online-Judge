#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    while(scanf("%d",&n)==1 && n!=0)
    {
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
            if(i==(n-1))
            {
                break;
            }

            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

