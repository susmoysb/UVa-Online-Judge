#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[50],i,j,pass,temp,n1,n2,count=0;
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        scanf("%d",&n2);
        for(j=0;j<n2;j++)
        {
            scanf("%d",&a[j]);
        }

        for(pass=0;pass<n2-1;pass++)
        {
            for(j=0;j<n2-1-pass;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    count++;
                }

            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
        count=0;

    }
    return 0;

}
