#include<stdio.h>
int main()
{
    int n,sum=0,i;
    while(scanf("%d",&n)==1&&n!=0)
    {
        for(i=1;i<=n;i++)
        {

            sum=sum+i*i;

        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
