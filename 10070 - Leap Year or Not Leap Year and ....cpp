#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,f1=0,f2=0,f3=0;
    while(scanf("%d",&y)==1)
    {
        if(y%400==0)
        {
            cout << "This is leap year." << endl;
            f1=5;
        }
        else if(y%4==0 && y%100!=0)
        {
            cout << "This is leap year." << endl;
            f1=5;
        }

        if(y%15==0)
        {
            cout << "This is huluculu festival year." << endl;
            f2=10;
        }

        if(f1==5 && y%55==0)
        {
            cout << "This is bulukulu festival year." << endl;
            f3=15;
        }

        if(f1!=5 && f2!=10 && f3!=15)
        {
            cout << "This is an ordinary year." << endl;
        }
        cout << endl;
        f1=0;f2=0;f3=0;

    }
    return 0;
}
