#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    double ans,sum=0,j=1.0;
    for(i=1;i<=39;i=i+2)
    {
        ans=i/j;
        sum=sum+ans;
        j=j*2;

    }
    cout << fixed;
    cout << setprecision(2) << sum << endl;
    return 0;

}
