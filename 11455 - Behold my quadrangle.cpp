#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],i,j,n;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=0;i<4;i++)
        {
            scanf("%d",&a[i]);
        }

        sort(a,a+4);

        if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
        {
            printf("square\n");
        }
        else if(a[0]==a[1] && a[2]==a[3])
        {
            printf("rectangle\n");
        }
        else if((a[0]+a[1]+a[2])>a[3])
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }

    }

    return 0;
}
