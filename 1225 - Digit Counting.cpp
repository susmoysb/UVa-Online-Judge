#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000000];
    int j,n;
    int a,i,ii,k,p,m;
    int c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        k=0;
        c0=0;c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
        scanf("%d",&a);

        for(i=1;i<=a;i++)
        {
            ii=i;
            while(ii>0)
            {
                m=ii%10;
                s[k]=m+'0';
                k++;
                ii=ii/10;
            }
        }
        p=k;

        for(k=0;k<p;k++)
        {
            if(s[k]=='0')
            {
                c0++;
            }
            else if(s[k]=='1')
            {
                c1++;
            }
            else if(s[k]=='2')
            {
                c2++;
            }
            else if(s[k]=='3')
            {
                c3++;
            }
            else if(s[k]=='4')
            {
                c4++;
            }
            else if(s[k]=='5')
            {
                c5++;
            }
            else if(s[k]=='6')
            {
                c6++;
            }
            else if(s[k]=='7')
            {
                c7++;
            }
            else if(s[k]=='8')
            {
                c8++;
            }
            else if(s[k]=='9')
            {
                c9++;
            }
        }

        printf("%d %d %d %d %d %d %d %d %d %d\n",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);

    }



    return 0;
}
