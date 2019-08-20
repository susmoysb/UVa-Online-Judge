#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,a[105],b[105];
    int i,j,k;

    cin >> n ;
    for(i=1;i<=n;i++)
    {
        cin >> l ;
        for(j=0;j<l;j++)
        {
            cin >> a[j] ;
        }
        for(j=0;j<l;j++)
        {
            cin >> b[j] ;
        }

        for(k=0;k<l;k++)
        {
            if(a[k]==1)
            {
                if(b[k]==1)
                {
                    cout << "." ;
                }
                else if(b[k]==2)
                {
                    cout << "," ;
                }
                else if(b[k]==3)
                {
                    cout << "?" ;
                }
                else if(b[k]==4)
                {
                    cout << "\"" ;
                }
            }
            else if(a[k]==2)
            {
                if(b[k]==1)
                {
                    cout << "a" ;
                }
                else if(b[k]==2)
                {
                    cout << "b" ;
                }
                else if(b[k]==3)
                {
                    cout << "c" ;
                }
            }
            else if(a[k]==3)
            {
                if(b[k]==1)
                {
                    cout << "d" ;
                }
                else if(b[k]==2)
                {
                    cout << "e" ;
                }
                else if(b[k]==3)
                {
                    cout << "f" ;
                }
            }
            else if(a[k]==4)
            {
                if(b[k]==1)
                {
                    cout << "g" ;
                }
                else if(b[k]==2)
                {
                    cout << "h" ;
                }
                else if(b[k]==3)
                {
                    cout << "i" ;
                }
            }
            else if(a[k]==5)
            {
                if(b[k]==1)
                {
                    cout << "j" ;
                }
                else if(b[k]==2)
                {
                    cout << "k" ;
                }
                else if(b[k]==3)
                {
                    cout << "l" ;
                }
            }
            else if(a[k]==6)
            {
                if(b[k]==1)
                {
                    cout << "m" ;
                }
                else if(b[k]==2)
                {
                    cout << "n" ;
                }
                else if(b[k]==3)
                {
                    cout << "o" ;
                }
            }
            else if(a[k]==7)
            {
                if(b[k]==1)
                {
                    cout << "p" ;
                }
                else if(b[k]==2)
                {
                    cout << "q" ;
                }
                else if(b[k]==3)
                {
                    cout << "r" ;
                }
                else if(b[k]==4)
                {
                    cout << "s" ;
                }
            }
            else if(a[k]==8)
            {
                if(b[k]==1)
                {
                    cout << "t" ;
                }
                else if(b[k]==2)
                {
                    cout << "u" ;
                }
                else if(b[k]==3)
                {
                    cout << "v" ;
                }
            }
            else if(a[k]==9)
            {
                if(b[k]==1)
                {
                    cout << "w" ;
                }
                else if(b[k]==2)
                {
                    cout << "x" ;
                }
                else if(b[k]==3)
                {
                    cout << "y" ;
                }
                else if(b[k]==4)
                {
                    cout << "z" ;
                }
            }
            else if(a[k]==0)
            {
                if(b[k]==1)
                {
                    cout << " " ;
                }
            }


        } // end of checking loop

        cout << endl;


    } // end of test case

    return 0;
}
