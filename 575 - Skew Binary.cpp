#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    int sum=0,l;
    int i,j;
    while(scanf("%s",s)==1)
    {
        if(strcmp(s,"0")==0)
        {
            break;
        }
        l=strlen(s);
        j=l;
        for(i=0;i<l;i++)
        {
            sum=sum+(s[i]-'0')*(pow(2,j)-1);
            j--;
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
