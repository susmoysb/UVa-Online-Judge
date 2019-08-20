#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10009];
    int i,j,k;
    cin >>  n;
    int mx=0;
    int lw=0;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    j=k=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>j)
        {
            mx++;
            j=a[i];
        }
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<k)
        {
            lw++;
            k=a[i];
        }
    }

    cout << mx << " " << lw << endl;

    return 0;
}
