#include <stdio.h>

int main()
{
    char s[100];

    int i,w=0;;

    while(gets(s))
    {

        for(i=0;s[i]!='\0';i++)
        {
            if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
            {
                if((s[i+1]>='A' && s[i+1]<='Z')||(s[i+1]>='a' && s[i+1]<='z'))
                {
                    continue;
                }
                else
                {
                    w++;
                }
            }


        }
        printf("%d\n",w);
        w=0;

    }



    return 0;

}
