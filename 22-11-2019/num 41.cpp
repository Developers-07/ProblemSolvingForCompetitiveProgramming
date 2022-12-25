#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int t,i,x,j,k;
    double sum=0.0,a=1.0;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> x;
        for(j=1;j<=x;j++)
        {
            for(k=1;k<=j;k++)
            {
                a=a*k;
            }
            sum=sum+double(j/a);
            a=1;
        }
        cout << fixed;
        cout << setprecision(4) << sum << endl;
        sum =0;
    }
    return 0;
}
