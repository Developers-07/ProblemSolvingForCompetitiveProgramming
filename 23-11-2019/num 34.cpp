#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,a,b,c,j;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> a >> b >> c;
        for(j=1;j<=c;j++)
        {
            if(j%a==0 && j%b==0)
            {
                cout << j << endl;
            }
        }
        if(i!=t)
        {
            cout << endl;
        }
    }
    return 0;
}
