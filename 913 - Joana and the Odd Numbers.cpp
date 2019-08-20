#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, sum , line, total_value;

    while(cin >> a )
    {
        sum = 0 ;
        line = (a+1)/2;
        total_value = line * line ;

        sum = sum + ((2*total_value)-1) ;
        sum = sum + ((2*total_value)-1) - 2 ;
        sum = sum + ((2*total_value)-1) - 4 ;
        cout << sum << endl;
    }
    return 0;
}
