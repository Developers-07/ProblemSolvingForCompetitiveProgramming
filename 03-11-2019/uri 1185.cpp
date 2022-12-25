#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    char c;
    int i,j,n=0;
    double ar[12][12],sum=0.0;
    cin >> c;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin >> ar[i][j];
        }
    }
    for(i=0;i<12;i++)
    {
        for(j=0;j<12-i-1;j++)
        {
            sum=sum+ar[i][j];
            n=n+1;
        }
    }
    if(c=='S')
    {
        cout << fixed;
        cout << setprecision(1) << sum << endl;
    }
    else if(c=='M')
    {
        cout << fixed;
        cout << setprecision(1) << (double)(sum/n) << endl;
    }
    return 0;

}
