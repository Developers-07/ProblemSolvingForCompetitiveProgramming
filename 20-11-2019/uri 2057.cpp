#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum;
    cin >> a >> b >> c;
    sum=a+b+c;
    if(sum>=0)
    {
        if(sum<24)
        {
            cout << sum << endl;
        }
        else if(sum==24)
        {
            cout << "0" << endl;
        }
        else if(sum>24)
        {
            cout << sum-24 << endl;
        }
    }
    else if(sum<0)
    {
        cout << 24+sum << endl;
    }
    return 0;
}
