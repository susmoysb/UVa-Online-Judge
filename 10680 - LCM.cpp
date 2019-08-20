#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
int lcm(int a,int b)
{
    return (a*gcd(a,b));
}


int main()
{
    int n,m,i,j,k,sum;
    while(scanf("%d%d",&n,&m)==2 && n!=0)
    {

        sum=lcm(n,m);

        printf("lcm is %d",sum);
    }
    return 0;
}

