#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int i,j,sum=0,l,p,bin;
    while(gets(s))
    {
        l=strlen(s);

        for(i=0;i<=l;i++)
        {
            if(s[i]=='a')
            {
                sum=sum+1;
            }
            else if(s[i]=='b')
            {
                sum=sum+2;
            }
            else if(s[i]=='c')
            {
                sum=sum+3;
            }
            else if(s[i]=='d')
            {
                sum=sum+4;
            }
            else if(s[i]=='e')
            {
                sum=sum+5;
            }
            else if(s[i]=='f')
            {
                sum=sum+6;
            }
            else if(s[i]=='g')
            {
                sum=sum+7;
            }
            else if(s[i]=='h')
            {
                sum=sum+8;
            }
            else if(s[i]=='i')
            {
                sum=sum+9;
            }
            else if(s[i]=='j')
            {
                sum=sum+10;
            }
            else if(s[i]=='k')
            {
                sum=sum+11;
            }
            else if(s[i]=='l')
            {
                sum=sum+12;
            }
            else if(s[i]=='m')
            {
                sum=sum+13;
            }
            else if(s[i]=='n')
            {
                sum=sum+14;
            }
            else if(s[i]=='o')
            {
                sum=sum+15;
            }
            else if(s[i]=='p')
            {
                sum=sum+16;
            }
            else if(s[i]=='q')
            {
                sum=sum+17;
            }
            else if(s[i]=='r')
            {
                sum=sum+18;
            }
            else if(s[i]=='s')
            {
                sum=sum+19;
            }
            else if(s[i]=='t')
            {
                sum=sum+20;
            }
            else if(s[i]=='u')
            {
                sum=sum+21;
            }
            else if(s[i]=='v')
            {
                sum=sum+22;
            }
            else if(s[i]=='w')
            {
                sum=sum+23;
            }
            else if(s[i]=='x')
            {
                sum=sum+24;
            }
            else if(s[i]=='y')
            {
                sum=sum+25;
            }
            else if(s[i]=='z')
            {
                sum=sum+26;
            }
            else if(s[i]=='A')
            {
                sum=sum+27;
            }
            else if(s[i]=='B')
            {
                sum=sum+28;
            }
            else if(s[i]=='C')
            {
                sum=sum+29;
            }
            else if(s[i]=='D')
            {
                sum=sum+30;
            }
            else if(s[i]=='E')
            {
                sum=sum+31;
            }
            else if(s[i]=='F')
            {
                sum=sum+32;
            }
            else if(s[i]=='G')
            {
                sum=sum+33;
            }
            else if(s[i]=='H')
            {
                sum=sum+34;
            }
            else if(s[i]=='I')
            {
                sum=sum+35;
            }
            else if(s[i]=='J')
            {
                sum=sum+36;
            }
            else if(s[i]=='K')
            {
                sum=sum+37;
            }
            else if(s[i]=='L')
            {
                sum=sum+38;
            }
            else if(s[i]=='M')
            {
                sum=sum+39;
            }
            else if(s[i]=='N')
            {
                sum=sum+40;
            }
            else if(s[i]=='O')
            {
                sum=sum+41;
            }
            else if(s[i]=='P')
            {
                sum=sum+42;
            }
            else if(s[i]=='Q')
            {
                sum=sum+43;
            }
            else if(s[i]=='R')
            {
                sum=sum+44;
            }
            else if(s[i]=='S')
            {
                sum=sum+45;
            }
            else if(s[i]=='T')
            {
                sum=sum+46;
            }
            else if(s[i]=='U')
            {
                sum=sum+47;
            }
            else if(s[i]=='V')
            {
                sum=sum+48;
            }
            else if(s[i]=='W')
            {
                sum=sum+49;
            }
            else if(s[i]=='X')
            {
                sum=sum+50;
            }
            else if(s[i]=='Y')
            {
                sum=sum+51;
            }
            else if(s[i]=='Z')
            {
                sum=sum+52;
            }

        }

        p=1;
        for(j=2;j<=sum/2;j++)
        {
            if(sum%j==0)
            {
                p=0;

                break;
            }

        }
        if(p==0)
        {
            printf("It is not a prime word.\n");
        }

        else
        {
            printf("It is a prime word.\n");

        }



        sum=0;
    }//while

    return 0;
}

