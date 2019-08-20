#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b;

    while(scanf("%llu %llu",&a,&b)==2)
    {
        if(a>b)
        {
            printf("%llu\n", a-b);
        }
        else if(b>a)
        {
            printf("%llu\n", b-a);
        }
        else
        {
            printf("0\n");
        }

    }
    return 0;
}
