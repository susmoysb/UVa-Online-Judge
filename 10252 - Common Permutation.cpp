#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[1005],s2[1005];
    int i,j;
    int l1,l2;

    int k,ki;

    while(gets(s1))
    {
        gets(s2);
        char tmp[1005];
        k=0;
        l1=strlen(s1);
        l2=strlen(s2);

        for(i=0;i<l1;i++) /// for s1
        {
            for(j=0;j<l2;j++) /// for s2
            {
                if(s1[i]==s2[j])
                {
                    tmp[k++]=s1[i];
                    s1[i]='5';
                    s2[j]='5';
                    break;
                }
            }
        }
        ki=k;
        tmp[k]='\0';
        sort(tmp,tmp+k);
        /*for(k=0;k<ki;k++)
        {
            printf("%c",tmp[k]);
        }
        printf("\n");*/
        puts(tmp);

    }

    return 0;
}
