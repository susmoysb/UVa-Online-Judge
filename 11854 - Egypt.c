#include<stdio.h>
int main()
{
    int a,b,c,r1,r2,r3;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        r1=a*a;
        r2=b*b;
        r3=c*c;
        if(r3==r1+r2)
        {
            printf("right\n");
        }
        else if(r2==r1+r3)
        {
            printf("right\n");
        }
        else if(r1==r2+r3)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }

    return 0;

}
