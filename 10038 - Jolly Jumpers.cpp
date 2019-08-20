#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[3005],b[3005],i,j,p=0;
    while(scanf("%d",&n)==1)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n-1;i++)
        {
            b[j]=abs(a[i]-a[i+1]);
            j++;
        }

        sort(b,b+n-1);

        for(j=0;j<n-1;j++)
        {
            if(b[j]==j+1)
            {
                continue;
            }
            else
            {
                p=5;
            }
        }

        if(p==5)
        {
            printf("Not jolly\n");
        }
        else
        {
            printf("Jolly\n");
        }
        p=0;

    }


    return 0;
}
