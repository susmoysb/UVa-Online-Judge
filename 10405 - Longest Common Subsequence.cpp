#include<bits/stdc++.h>
using namespace std;

//int mx(int a,int b)
//{
//    if(a>=b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}

char x[10000],y[10000];

int lcs(char x[], char y[],int  m,int n)
{
    if(m==0 || n==0)
    {
        return 0;
    }

    if(x[m-1] == y[n-1])
    {
        return 1+lcs(x,y,m-1,n-1);
    }
    else
    {
        return max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
    }
}

int main()
{
    int m,n,total=0;
    while(gets(x))
    {
        gets(y);

        m=strlen(x);
        n=strlen(y);

        total=lcs(x,y,m,n);

        cout << total << endl;
        //printf("Longest Common Subsequence = %d\n", total);

    }
    return 0;
}
