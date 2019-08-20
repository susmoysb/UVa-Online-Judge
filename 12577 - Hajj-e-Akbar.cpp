#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    char a[100];
    while(gets(a))
    {
        i++;


        if(strcmp(a,"*")==0)
        {
            break;
        }

        if(strcmp(a,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(strcmp(a,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }

        else
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
    }


    return 0;
}
