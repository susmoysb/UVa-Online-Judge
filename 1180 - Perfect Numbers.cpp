#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000];
    int i,n;
    long long int value,j,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d,",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum=1;
        if(a[i]>=18)
        {
            printf("No\n");
            continue;
        }
        value = pow(2,a[i]-1)*(pow(2,a[i])-1);
        for(j=2; j<=sqrt(value); j++)
        {
            if(value%j==0)
            {
                sum=sum+j;
                sum=sum+value/j;
            }
        }
        if(sum==value && value!=1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

        //cout << value << endl;

    }

    /*for(i=0;i<n;i++)
    {
        if(a[i]==2 || a[i]==3 || a[i]==5 || a[i]==7 || a[i]==13 || a[i]==17)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }*/

    return 0;
}
