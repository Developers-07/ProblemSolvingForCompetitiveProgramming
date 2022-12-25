#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,n,j;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> x >> n;
        if(x<=n)
        {
            for(j=x;j<=n;j++)
            {
                if(j%x==0)
                {
                    cout << j << endl;
                }
            }
        }
        else
        {
            cout << "Invalid!" << endl;
        }
        cout << endl;
    }
    return 0;
}
