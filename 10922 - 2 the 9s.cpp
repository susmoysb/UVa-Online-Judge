#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1005];

    int i,l,sum=0;

    while(scanf("%s",s)==1)
    {
        sum=0;
        l=strlen(s);
        if(strcmp(s,"0")==0)
        {
            break;
        }

        for(i=0;i<l;i++)
        {
            sum=10*sum + s[i]- '0' ;
            sum=sum%9;
        }

        if(sum==0)
        {
            printf("%s is a multiple of 9 and has 9-degree %d.\n",s,l%9);
        }
        else
        {
            printf("%s is not a multiple of 9.\n",s);
        }

    }


    return 0;
}
