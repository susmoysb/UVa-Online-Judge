#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,i,sum=0;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&a)==1)
    {
        if(a==0)
        {

            break;
        }

        for(i=1;i<a;i++)
        {
            if(a%i==0)
            {
                sum=sum+i;
            }
        }
        if(a==sum)
        {
            printf("%5d  PERFECT\n",a);
        }
        else if(a>sum)
        {
            printf("%5d  DEFICIENT\n",a);
        }
        else if(a<sum)
        {
            printf("%5d  ABUNDANT\n",a);
        }
        sum=0;
    }
    printf("END OF OUTPUT\n");
    return 0;
}
