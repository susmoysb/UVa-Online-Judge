#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,l,i,sum,count=0;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&l)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        {
            break;
        }

        for(i=0;i<=l;i++)
        {

            sum=a*(i*i)+b*i+c;
            if(sum%d==0)
            {
                count++;
            }

        }
        printf("%d\n",count);
        count=0;


    }
    return 0;

}
