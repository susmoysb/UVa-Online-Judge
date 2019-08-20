#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int i,j,sum=0,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        if(strcmp(a,"donate")==0)
        {
            scanf("%d",&k);
            sum=sum+k;
        }
        else
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
