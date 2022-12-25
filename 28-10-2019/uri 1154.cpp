#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int num,c=0,sum=0;
    double ans;
    cin >> num;
    while(num>0)
    {
        sum=sum+num;
        cin >> num;
        c=c+1;
    }
    ans=(double)sum/c;
    cout << fixed;
    cout << setprecision(2) << ans << endl;
    return 0;
}
