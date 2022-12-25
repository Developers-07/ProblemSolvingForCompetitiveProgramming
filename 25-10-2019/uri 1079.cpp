#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int t,i,j;
    float a,b,c,x;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> a >> b >> c;
        x=((a*2)+(b*3)+(c*5))/10;
        cout << fixed;
        cout << setprecision(1) << x << endl;
    }
    return 0;
}
