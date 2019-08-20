#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10];
    int i,j,n,m,p,sum=0;
    int a[105];

    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> m;
        getchar();
        for(j=1;j<=m;j++)
        {
            scanf("%s",s);

            if(strcmp(s,"LEFT")==0)
            {
                a[j]=-1;
            }
            else if(strcmp(s,"RIGHT")==0)
            {
                a[j]=1;
            }
            else if(strcmp(s,"SAME")==0)
            {
                scanf("%s",s);
                cin >> p;
                a[j]=a[p];
            }

        }

        for(j=1;j<=m;j++)
        {
            sum=sum+a[j];
        }

        cout << sum << endl;
        sum=0;

    }

    return 0;
}
