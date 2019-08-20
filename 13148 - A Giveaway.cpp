#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a;
    int ans,res;
    while(scanf("%d",&a)==1 && a!=0)
    {
        if(a==1 || a==64 || a==729 || a==4096)
        {
            cout << "Special" << endl;
        }
        else if(a==(125*125) || a==(216*216) || a==(343*343) || a==(512*512) || a==(729*729) || a==(1000*1000) || a==(1331*1331) || a==(1728*1728) || a==(2197*2197) || a==(2744*2744) || a==(3375*3375) || a==(4096*4096) || a==(4913*4913) || a==(5832*5832) || a==(6859*6859) || a==(8000*8000) || a==(9261*9261))
        {
            cout << "Special" << endl;
        }
        else
        {
            cout << "Ordinary" << endl;
        }
    }

    return 0;
}
