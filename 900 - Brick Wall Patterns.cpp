#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,sum=0,f1=0,s1=1,f;
    while(scanf("%d",&a)==1  &&  a!=0)
    {
        for(i=1;i<=a;i++)
        {
            sum=0;
            f=f1+s1;
            sum=sum+f;
            f1=s1;
            s1=f;
        }
        printf("%d\n",sum);
        sum=0;
        f1=0;
        s1=1;
    }
    return 0;
}
