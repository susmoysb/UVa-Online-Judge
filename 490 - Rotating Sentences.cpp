#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,ii;
    char ar[100][100];
    char s[105];
    int l,ml=0;
    for(i=0; i<100; i++)
    {
        for(j=0; j<100; j++)
        {
            ar[i][j]=' ' ;
        }
    }
    i=j=0;
    while(gets(s))
    {
        l=strlen(s);

        if(ml<l)
        {
            ml=l;
        }
        for(j=0;j<l;j++)
        {
            ar[i][j]=s[j];
        }
        i++;
    }
    ii=i;

    for(j=0;j<ml;j++)
    {
        for(i=ii-1;i>=0;i--)
        {
            cout << ar[i][j] ;
        }
        cout << endl;
    }
    return 0;
}
