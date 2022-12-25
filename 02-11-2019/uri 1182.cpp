#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int num,i,j,k;
    char c;
    double ar[12][12],sum=0.0;
    cin >> num;
    cin >> c;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin >> ar[i][j];
        }
    }
    for(k=0;k<12;k++)
    {
        sum=sum+ar[k][num];
    }
    if(c=='S')
    {
        cout << fixed;
        cout << setprecision(1) << sum << endl;
    }
    else if(c=='M')
    {
        cout << fixed;
        cout << setprecision(1) << sum/12.0 << endl;
    }
    return 0;
}
