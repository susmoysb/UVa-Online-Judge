#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int i,l;
    while(scanf("%s",a))
    {
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            printf("%c",(a[i]-7));
        }
        printf("\n");
    }

    return 0;

}