#include<bits/stdc++.h>
using namespace std;
int prime(int a)
{
    int ii;
    if(a==1)
    {
        return 1; /// 1 means not prime
    }
    else if(a==2 || a==3)
    {
        return 2; /// 2 means prime
    }
    else
    {
        for(ii=2;ii<=sqrt(a);ii++)
        {
            if(a%ii==0)
            {
                return 1 ;
            }
        }
        return 2;
    }
}

int main()
{
    char s[9999],number[9999],capital[9999],small[9999] ;
    int i,j,k,l,counter;
    int flag;
    int ni,ci,si ;
    int tc,cs=1;
    cin >> tc ;
    getchar();
    while(tc--)
    {
        cin >> s ;
        flag=0;
        counter=1;
        ni=ci=si=0;
        l=strlen(s) ;
        for(i=0;i<l;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                number[ni++] = s[i] ;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                capital[ci++] = s[i] ;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                small[si++] = s[i] ;
            }
        }
        sort(number,number+ni);
        sort(capital,capital+ci);
        sort(small,small+si);
        printf("Case %d: ",cs++);

        for(i=0;i<ni;i++)
        {
            if(number[i]==number[i+1])
            {
                counter++ ;
            }
            else
            {
                k=prime(counter);
                if(k==2)
                {
                    cout << number[i] ;
                    flag=5;
                }
                counter=1;
            }
        }
        counter=1;
        for(i=0;i<ci;i++)
        {
            if(capital[i]==capital[i+1])
            {
                counter++ ;
            }
            else
            {
                k=prime(counter);
                if(k==2)
                {
                    cout << capital[i] ;
                    flag=5;
                }
                counter=1;
            }
        }
        counter=1;
        for(i=0;i<si;i++)
        {
            if(small[i]==small[i+1])
            {
                counter++ ;
            }
            else
            {
                k=prime(counter);
                if(k==2)
                {
                    cout << small[i] ;
                    flag=5;
                }
                counter=1;
            }
        }
        if(flag==0)
        {
            cout << "empty" ;
        }
        cout << endl;
    }
    return 0;
}

