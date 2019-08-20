#include<bits/stdc++.h>
using namespace std ;
int flag = 0 ;
int BS(int a[],int n,int m)
{
    flag = 0 ;
    int first,mid,last ;
    first = 0 ;
    last = n-1 ;
    mid = (first+last) / 2 ;

    while(first<=last)
    {
        if(a[mid]==m)
        {
            flag = 1 ;
            return mid ;
        }
        else if(a[mid]>m)
        {
            last = mid-1 ;
            mid = (first+last) / 2 ;
        }
        else if(a[mid]<m)
        {
            first = mid+1 ;
            mid = (first+last) / 2 ;
        }
    }
    return mid ;
}
int main()
{
    int n,q,i,j ;
    int a[50009], b ;
    int loc ;

    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }

    scanf("%d",&q) ;
    while(q--)
    {
        scanf("%d",&b) ;

        if(b<a[0])
        {
            cout << "X " << a[0] << endl;
        }
        else if(b>a[n-1])
        {
            cout << a[n-1] << " X" << endl;
        }
        else
        {
            loc = BS(a,n,b) ;

            if(flag==1) /// zodi thake
            {
                loc = BS(a,n,b-1) ; ///left check
                if(flag==1)
                {
                    cout << a[loc] << " " ;
                }
                else
                {
                    if(a[loc]==b)
                    {
                        cout << "X " ;
                    }
                    else
                    {
                        cout << a[loc] << " " ;
                    }
                }

                loc = BS(a,n,b+1) ; /// right check
                if(flag==1)
                {
                    cout << a[loc] << endl ;
                }
                else
                {
                    if(a[loc]==b && loc==(n-1))
                    {
                        cout << "X" << endl ;
                    }
                    else
                    {
                        cout << a[loc+1] << endl ;
                    }
                }
            }
            else if(flag==0) /// zodi na thake
            {
                cout << a[loc] << " " ;
                loc = BS(a,n,b+1) ; /// right check
                if(flag==1)
                {
                    cout << a[loc] << endl ;
                }
                else
                {
                    if(a[loc]==b && loc==(n-1))
                    {
                        cout << "X" << endl ;
                    }
                    else
                    {
                        cout << a[loc+1] << endl ;
                    }
                }
            }
        }
    } /// end queries
    return 0;
}

