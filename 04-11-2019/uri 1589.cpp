#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,r1,r2,ans;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> r1 >> r2;
        if(r1>0 && r2>0)
        {
            ans=r1+r2;
            cout << ans << endl;
        }
    }
    return 0;
}
