#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    double t,i,x,y,z,s,a,b,c,ans;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> x >> y >> z;
        s=(x+y+z)/2;
        a=s-x;
        b=s-y;
        c=s-z;
        ans=sqrt(s*a*b*c);
        cout << fixed;
        cout << "Area = " << setprecision(3) << ans << endl;
    }
    return 0;
}
