#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    double ans,sum=0;
    for(i=1;i<=100;i++)
    {
        ans=1.0/i;
        sum=sum+ans;

    }
    cout << fixed;

    cout << setprecision(2) << sum << endl;
    return 0;
}
