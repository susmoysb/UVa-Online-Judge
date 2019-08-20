#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b)
        {
            if(a>=c)
            {
                if(b>=c)
                {
                    printf("Case %d: %d\n",i,b);
                }
                else if(c>=b)
                {
                    printf("Case %d: %d\n",i,c);
                }
            }
            else if(c>=a)
            {
                printf("Case %d: %d\n",i,a);
            }

        }
        else if(b>=a)
        {
            if(b>=c)
            {
                if(a>=c)
                {
                    printf("Case %d: %d\n",i,a);
                }
                else if(c>=a)
                {
                    printf("Case %d: %d\n",i,c);
                }
            }
            else if(c>=b)
            {
                printf("Case %d: %d\n",i,b);
            }
        }

    }

    return 0;
}
