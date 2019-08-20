#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    int j,k;
    char s[150];
    double a1,a2,ans;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(s);

        a1=0;a2=0;

        for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='0' || s[j]=='2' || s[j]=='3' || s[j]=='4' || s[j]=='5' || s[j]=='6' || s[j]=='7' || s[j]=='8' || s[j]=='9')
            {
                a1=0.5*(s[j]-'0');
                k=j;
                break;
            }
            else if(s[j]=='1' && s[j+1]!='0')
            {
                a1=0.5*(s[j]-'0');
                k=j;
                break;
            }
            else if(s[j]=='1' && s[j+1]=='0')
            {
                a1=0.5*10;
                k=j;
                break;
            }
        }
        for(j=k+1;j<strlen(s);j++)
        {
            if(s[j]=='0' || s[j]=='1' || s[j]=='2' || s[j]=='3' || s[j]=='4' || s[j]=='5' || s[j]=='6' || s[j]=='7' || s[j]=='8' || s[j]=='9')
            {
                a2=0.05*(s[j]-'0');
                break;
            }
        }

        ans=a1+a2;
        printf("Case %d: ",i);
        cout << ans << endl;
    }

    return 0;
}
