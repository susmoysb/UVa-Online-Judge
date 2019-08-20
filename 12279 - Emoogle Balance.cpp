#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1005],c1=0,c2=0;
    int i,j=1,EB;
    while(cin >> n && n!=0)
    {
        for(i=0;i<n;i++)
        {
            cin >> a[i] ;
        }

        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c1++;
            }
            else if(a[i]>=1 && a[i]<=99)
            {
                c2++;
            }
        }

        EB = c2-c1;

        printf("Case %d: %d\n",j,EB);
        c1=0;c2=0;
        j++;

    }
    return 0;
}
