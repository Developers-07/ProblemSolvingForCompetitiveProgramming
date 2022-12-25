#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int t,i,x,y;
    double ans;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> x >> y;
        if(y==0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            ans=((double)x)/y;
            cout << fixed;
            cout << setprecision(1) << ans << endl;
        }
    }
    return 0;
}
