#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100],s2[100];
    int i,j,sum1=0,sum2=0,l1,l2;
    int ss1=0,ss2=0,s1m,s2m;
    double mn,mx;
    double ans;
    while(gets(s))
    {
        gets(s2);
        l1=strlen(s);
        l2=strlen(s2);
        for(i=0; i<l1; i++)
        {
            if(s[i]=='a' || s[i]=='A')
            {
                sum1=sum1+1;
            }
            else if(s[i]=='b' || s[i]=='B')
            {
                sum1=sum1+2;
            }
            else if(s[i]=='c' || s[i]=='C')
            {
                sum1=sum1+3;
            }
            else if(s[i]=='d' || s[i]=='D')
            {
                sum1=sum1+4;
            }
            else if(s[i]=='e' || s[i]=='E')
            {
                sum1=sum1+5;
            }
            else if(s[i]=='f' || s[i]=='F')
            {
                sum1=sum1+6;
            }
            else if(s[i]=='g' || s[i]=='G')
            {
                sum1=sum1+7;
            }
            else if(s[i]=='h' || s[i]=='H')
            {
                sum1=sum1+8;
            }
            else if(s[i]=='i' || s[i]=='I')
            {
                sum1=sum1+9;
            }
            else if(s[i]=='j' || s[i]=='J')
            {
                sum1=sum1+10;
            }
            else if(s[i]=='k' || s[i]=='K')
            {
                sum1=sum1+11;
            }
            else if(s[i]=='l' || s[i]=='L')
            {
                sum1=sum1+12;
            }
            else if(s[i]=='m' || s[i]=='M')
            {
                sum1=sum1+13;
            }
            else if(s[i]=='n' || s[i]=='N')
            {
                sum1=sum1+14;
            }
            else if(s[i]=='o' || s[i]=='O')
            {
                sum1=sum1+15;
            }
            else if(s[i]=='p' || s[i]=='P')
            {
                sum1=sum1+16;
            }
            else if(s[i]=='q' || s[i]=='Q')
            {
                sum1=sum1+17;
            }
            else if(s[i]=='r' || s[i]=='R')
            {
                sum1=sum1+18;
            }
            else if(s[i]=='s' || s[i]=='S')
            {
                sum1=sum1+19;
            }
            else if(s[i]=='t' || s[i]=='T')
            {
                sum1=sum1+20;
            }
            else if(s[i]=='u' || s[i]=='U')
            {
                sum1=sum1+21;
            }
            else if(s[i]=='v' || s[i]=='V')
            {
                sum1=sum1+22;
            }
            else if(s[i]=='w' || s[i]=='W')
            {
                sum1=sum1+23;
            }
            else if(s[i]=='x' || s[i]=='X')
            {
                sum1=sum1+24;
            }
            else if(s[i]=='y' || s[i]=='Y')
            {
                sum1=sum1+25;
            }
            else if(s[i]=='z' || s[i]=='Z')
            {
                sum1=sum1+26;
            }
        }//end of s1

        for(i=0; i<l2; i++)
        {
            if(s2[i]=='a' || s2[i]=='A')
            {
                sum2=sum2+1;
            }
            else if(s2[i]=='b' || s2[i]=='B')
            {
                sum2=sum2+2;
            }
            else if(s2[i]=='c' || s2[i]=='C')
            {
                sum2=sum2+3;
            }
            else if(s2[i]=='d' || s2[i]=='D')
            {
                sum2=sum2+4;
            }
            else if(s2[i]=='e' || s2[i]=='E')
            {
                sum2=sum2+5;
            }
            else if(s2[i]=='f' || s2[i]=='F')
            {
                sum2=sum2+6;
            }
            else if(s2[i]=='g' || s2[i]=='G')
            {
                sum2=sum2+7;
            }
            else if(s2[i]=='h' || s2[i]=='H')
            {
                sum2=sum2+8;
            }
            else if(s2[i]=='i' || s2[i]=='I')
            {
                sum2=sum2+9;
            }
            else if(s2[i]=='j' || s2[i]=='J')
            {
                sum2=sum2+10;
            }
            else if(s2[i]=='k' || s2[i]=='K')
            {
                sum2=sum2+11;
            }
            else if(s2[i]=='l' || s2[i]=='L')
            {
                sum2=sum2+12;
            }
            else if(s2[i]=='m' || s2[i]=='M')
            {
                sum2=sum2+13;
            }
            else if(s2[i]=='n' || s2[i]=='N')
            {
                sum2=sum2+14;
            }
            else if(s2[i]=='o' || s2[i]=='O')
            {
                sum2=sum2+15;
            }
            else if(s2[i]=='p' || s2[i]=='P')
            {
                sum2=sum2+16;
            }
            else if(s2[i]=='q' || s2[i]=='Q')
            {
                sum2=sum2+17;
            }
            else if(s2[i]=='r' || s2[i]=='R')
            {
                sum2=sum2+18;
            }
            else if(s2[i]=='s' || s2[i]=='S')
            {
                sum2=sum2+19;
            }
            else if(s2[i]=='t' || s2[i]=='T')
            {
                sum2=sum2+20;
            }
            else if(s2[i]=='u' || s2[i]=='U')
            {
                sum2=sum2+21;
            }
            else if(s2[i]=='v' || s2[i]=='V')
            {
                sum2=sum2+22;
            }
            else if(s2[i]=='w' || s2[i]=='W')
            {
                sum2=sum2+23;
            }
            else if(s2[i]=='x' || s2[i]=='X')
            {
                sum2=sum2+24;
            }
            else if(s2[i]=='y' || s2[i]=='Y')
            {
                sum2=sum2+25;
            }
            else if(s2[i]=='z' || s2[i]=='Z')
            {
                sum2=sum2+26;
            }
        } // end of s2

        while(sum1>9 || sum2>9)
        {
            while(sum1!=0 || sum2!=0)
            {
                s1m=sum1%10;
                s2m=sum2%10;
                ss1=ss1+s1m;
                ss2=ss2+s2m;
                sum1=sum1/10;
                sum2=sum2/10;

            }
            sum1=ss1;
            sum2=ss2;
            ss1=ss2=0;
        }
        if(sum1==sum2)
        {
            cout << "100.00 %" << endl;
        }
        else
        {
            mn=min(sum1,sum2);
            mx=max(sum1,sum2);
            ans=(mn/mx)*100;
            printf("%.2lf ",ans);
            cout << "%" << endl;

        }


        sum1=0;
        sum2=0;
    }//while

    return 0;
}

