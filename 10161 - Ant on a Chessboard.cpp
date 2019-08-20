#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,row,col;
    while(cin >> n && n!=0)
    {
        x=ceil(sqrt(n));
        if(x%2==0)
        {
            y=n-pow(x-1,2);
            if(y<x)
            {
                row=x;
                col=y;
            }
            else
            {
                row=1+x*x-n;
                col=x;
            }
            cout << col << " " << row << endl;
        }
        else
        {
            y=n-pow(x-1,2);
            if(y<x)
            {
                row=y;
                col=x;
            }
            else
            {
                row=x;
                col=1+x*x-n;
            }
            cout << col << " " << row << endl;
        }
    }
    return 0;
}
