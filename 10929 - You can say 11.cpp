#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1005];
    int i,j,k,sum=0,flag;
    while(scanf("%s",s)==1)
    {
        if(strcmp(s,"0")==0)
        {
            break;
        }
        for(i=0;i<strlen(s);i++)
        {
            sum=s[i]-'0'+sum*10;

            sum=sum%11;
        }
        if(sum==0)
        {
            printf("%s is a multiple of 11.\n",s);
        }
        else
        {
            printf("%s is not a multiple of 11.\n",s);
        }

        sum=0;

    }
    return 0;
}
