#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[1000],pass,temp,count=0;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(pass=0;pass<n-1;pass++)
        {
            for(i=0;i<n-1-pass;i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    count++;
                }
            }
        }

        printf("Minimum exchange operations : %d\n",count);
        count=0;
    }
    return 0;

}
