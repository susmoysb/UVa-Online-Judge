#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x0,y0,x1,y1,cx,cy,r;
    int l,w;
    double dist,dgnl;
    double ax,ay;
    double dx,dy;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d%d%d%d",&x0,&y0,&x1,&y1,&cx,&cy,&r);
        l=r*5;
        w=r*3;
        dist=sqrt(pow(x0-x1,2)+pow(y0-y1,2));
        dgnl=sqrt(w*w+l*l);
        if(dist==dgnl)
        {
            ax=(double)(l*45)/100;
            ay=w/2;

            dx=ax-cx;
            dy=ay-cy;
            if(dx==dy)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "No" << endl;
            }

        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
