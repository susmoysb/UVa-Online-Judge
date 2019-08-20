#include<stdio.h>
int main()

{
    int n,i,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
        scanf("%d%d%d%d%d",&a6,&a7,&a8,&a9,&a10);

        if(a1>=a2 && a2>=a3 && a3>=a4 && a4>=a5 && a5>=a6 && a6>=a7 && a7>=a8 && a8>=a9 && a9>=a10)
        {
            printf("Ordered\n");
        }
        else if(a1<=a2 && a2<=a3 && a3<=a4 && a4<=a5 && a5<=a6 && a6<=a7 && a7<=a8 && a8<=a9 && a9<=a10)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
    }
    return 0;
}
