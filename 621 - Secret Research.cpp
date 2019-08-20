#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,l;
    char s[1000];

    scanf("%lld",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        if((l==1 && s[0]=='1') || (l==1 && s[0]=='4') || (l==2 && s[0]=='7' && s[1]=='8'))
        {
            cout << "+" << endl;
        }
        else if(s[l-1]=='5' && s[l-2]=='3')
        {
            cout << "-" << endl;
        }
        else if(s[0]=='9' && s[l-1]=='4')
        {
            cout << "*" << endl;
        }
        else
        {
            cout << "?" << endl;
        }

    }


    return 0;
}
