#include<bits/stdc++.h>
using namespace std;
int main()
{
    int G,N;
    int i,j;
    while(cin >> N  && N!=0)
    {
        G=0;
        for(i=1; i<N; i++)
        {
            for(j=i+1; j<=N; j++)
            {
                G+=__gcd(i,j);
            }
        }

        cout << G << endl;
    }
    return 0;
}
