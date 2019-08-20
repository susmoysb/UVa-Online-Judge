#include<bits/stdc++.h>
using namespace std;
char s[10000000];
int main()
{
    int n,m;
    char ch1,ch2;
    int i,j,k;
    scanf("%d",&n);
    getchar();
    for(j=1;j<=n;j++)
    {
        scanf("%s",s);
        scanf("%d",&m);
        getchar();
        for(k=1;k<=m;k++)
        {
            cin >> ch1 >> ch2 ;

            for(i=0;i<strlen(s);i++)
            {
                if(s[i]==ch2)
                {
                    s[i]=ch1;
                }
                else
                {
                    s[i]=s[i];
                }
            }
        }

        cout << s << endl;

    }

    return 0;
}
