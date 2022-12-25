#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,x,ans;
    cin >> a >> b;
    x=b-a;
    ans=(x*100)/a;
    cout << fixed;
    cout << setprecision(2) << ans << "%" << endl;
    return 0;

}
