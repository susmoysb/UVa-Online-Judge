#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    int l,i=0,j,k,len;
    while(scanf("%s",s)==1)
    {
        i++;
        l=strlen(s);

        printf("%4d. ",i);

        if(l==1 || l==2)
        {
            for(j=0;j<l;j++)
            {
                printf("%d",s[j]-'0');
            }
            printf("\n");
        }
        else if(l==3)
        {
            printf("%d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0');
        }
        else if(l==4)
        {
            printf("%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0');
        }
        else if(l==5)
        {
            printf("%d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0');
        }
        else if(l==6)
        {
            printf("%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0');
        }
        else if(l==7)
        {
            printf("%d%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0',s[6]-'0');
        }
        else if(l==8)
        {
            printf("%d kuti %d%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0',s[6]-'0',s[7]-'0');
        }
        else if(l==9)
        {
            printf("%d%d kuti %d%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0',s[6]-'0',s[7]-'0',s[8]-'0');
        }
        else if(l==10)
        {
            printf("%d shata %d%d kuti %d%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0',s[6]-'0',s[7]-'0',s[8]-'0',s[9]-'0');
        }
        else if(l==11)
        {
            printf("%d hajar %d shata %d%d kuti %d%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0',s[6]-'0',s[7]-'0',s[8]-'0',s[9]-'0',s[10]-'0');
        }
        else if(l==12)
        {
            printf("%d%d hajar %d shata %d%d kuti %d%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0',s[6]-'0',s[7]-'0',s[8]-'0',s[9]-'0',s[10]-'0',s[11]-'0');
        }
        else if(l==13)
        {
            printf("%d lakh %d%d hajar %d shata %d%d kuti %d%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0',s[6]-'0',s[7]-'0',s[8]-'0',s[9]-'0',s[10]-'0',s[11]-'0',s[12]-'0');
        }
        else if(l==14)
        {
            printf("%d%d lakh %d%d hajar %d shata %d%d kuti %d%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0',s[6]-'0',s[7]-'0',s[8]-'0',s[9]-'0',s[10]-'0',s[11]-'0',s[12]-'0',s[13]-'0');
        }
        else if(l==15)
        {
            printf("%d kuti %d%d lakh %d%d hajar %d shata %d%d kuti %d%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0',s[6]-'0',s[7]-'0',s[8]-'0',s[9]-'0',s[10]-'0',s[11]-'0',s[12]-'0',s[13]-'0',s[14]-'0');
        }
        else if(l>=16)
        {
            len=l-15;
            for(k=0;k<len;k++)
            {
                printf("%d",s[k]-'0');
            }
            printf("%d kuti %d%d lakh %d%d hajar %d shata %d%d kuti %d%d lakh %d%d hajar %d shata %d%d\n",s[0]-'0',s[1]-'0',s[2]-'0',s[3]-'0',s[4]-'0',s[5]-'0',s[6]-'0',s[7]-'0',s[8]-'0',s[9]-'0',s[10]-'0',s[11]-'0',s[12]-'0',s[13]-'0',s[14]-'0');

        }


    }

    return 0;
}
