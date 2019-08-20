#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f;

    while(scanf("%d",&f)==1)
    {
        if(f<0)
        {
            if(f%2==0)
            {
                printf("Underflow!\n");
            }
            else
            {
                printf("Overflow!\n");
            }
        }

        else if(f<=7)
        {
            printf("Underflow!\n");
        }
        else if(f==8)
        {
            printf("40320\n");
        }
        else if(f==9)
        {
            printf("362880\n");
        }
        else if(f==10)
        {
            printf("3628800\n");
        }
        else if(f==11)
        {
            printf("39916800\n");
        }
        else if(f==12)
        {
            printf("479001600\n");
        }
        else if(f==13)
        {
            printf("6227020800\n");
        }
        else
        {
            printf("Overflow!\n");
        }
    }
    return 0;
}
