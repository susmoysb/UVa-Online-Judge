#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,l;
    char s[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        scanf("%s",s);
        l=strlen(s);
        if(l==5)
        {
            printf("3\n");
        }
        else if(s[0]=='o'&&s[1]=='n'||s[0]=='o'&&s[1]=='e'||s[0]=='o'&&s[2]=='e'||s[0]=='o'&&s[2]=='n'||s[1]=='n'&&s[2]=='e')
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }

    }

    return 0;

}
