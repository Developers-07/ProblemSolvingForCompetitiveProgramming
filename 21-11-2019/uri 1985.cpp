#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,i,p,q;
    double x=0.0,y=0.0,z=0.0,w=0.0,t=0.0,sum=0.0;
    cin >> a;
    for(i=1;i<=a;i++)
    {
        cin >> p >> q;
        if(p==1001)
        {
            x=(1.50*q);
            sum=sum+x;
        }
        else if(p==1002)
        {
            y=(2.50*q);
            sum=sum+y;
        }
        else if(p==1003)
        {
            z=(3.50*q);
            sum=sum+z;
        }
        else if(p==1004)
        {
            w=(4.50*q);
            sum=sum+w;
        }
        else if(p==1005)
        {
            t=(5.50*q);
            sum=sum+t;
        }

    }

    cout << fixed;
    cout << setprecision(2) << sum << endl;
    return 0;
}
