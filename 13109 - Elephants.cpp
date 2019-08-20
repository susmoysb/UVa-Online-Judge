#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    int m,w,a[100005],b[100005],i,k,l,counter,sum;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d%d",&m,&w);
        k=sum=0;
        counter=0;
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+m);

        for(i=0;i<m;i++)
        {
            if(a[i]<=w)
            {
                b[k]=a[i];
                k++;
            }
        }
        l=k;
        for(k=0;k<l;k++)
        {
            sum=sum+b[k];
            if(sum<=w)
            {
                counter++;
            }

        }

        cout << counter << endl;

    }
    return 0;
}

