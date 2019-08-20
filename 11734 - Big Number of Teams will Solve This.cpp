#include<bits/stdc++.h>
using namespace std;
char c[100];
int main()
{
    char a[100],b[100];
    int n,i,j,p=0,k=0;

    scanf("%d",&n);
    getchar();
    for(j=1; j<=n; j++)
    {
        gets(a);
        gets(b);
        printf("Case %d: ",j);
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]==' ')
            {
                p=5;
                break;
            }
            /*else
            {
                c[k]=a[i];
                k++;
            }*/
        }

        if(p==5)
        {
            k=0;
            for(i=0; i<strlen(a); i++)
            {
                if(a[i]==' ')
                {
                    continue;
                }
                else if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
                {
                    c[k]=a[i];
                    k++;
                }
            }
            if(strcmp(c,b)==0)
            {
                printf("Output Format Error\n");
            }
            else
            {

                printf("Wrong Answer\n");
            }

        }
        else if(strcmp(a,b)==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("Wrong Answer\n");
        }

        p=0;

        for(i=0; i<k; i++)
        {
            c[i]='\0';
        }
        k=0;
    }



    return 0;
}
