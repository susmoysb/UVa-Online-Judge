#include<stdio.h>
int main()
{
    char ch[100];
    long int i,count=0;
    while(gets(ch))
    {
        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]=='"')
            {
                count++;
                if(count%2==1)
                {
                    printf("``");
                }
                else
                {
                    printf("''");
                }
            }

            else
            {
                printf("%c",ch[i]);
            }

        }
        printf("\n");
    }
    return 0;
}
