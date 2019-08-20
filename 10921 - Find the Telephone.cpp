#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int i;
    while(gets(s))
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='A' || s[i]=='B' || s[i]=='C')
            {
                printf("%d",2);
            }
            else if(s[i]=='D' || s[i]=='E' || s[i]=='F')
            {
                printf("%d",3);
            }
            else if(s[i]=='G' || s[i]=='H' || s[i]=='I')
            {
                printf("%d",4);
            }
            else if(s[i]=='J' || s[i]=='K' || s[i]=='L')
            {
                printf("%d",5);
            }
            else if(s[i]=='M' || s[i]=='N' || s[i]=='O')
            {
                printf("%d",6);
            }
            else if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S')
            {
                printf("%d",7);
            }
            else if(s[i]=='T' || s[i]=='U' || s[i]=='V')
            {
                printf("%d",8);
            }
            else if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
            {
                printf("%d",9);
            }
            else
            {
                printf("%c",s[i]);
            }
        }
        printf("\n");

    }
    return 0;

}
