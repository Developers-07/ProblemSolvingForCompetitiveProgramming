#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,sum=0;
    cin >> m >> n;
    freopen("input.text", "r", stdin);
    if(n<=0 || m<=0)
        break;
    else if(n>0 && m>0)
    {
        if(m>n)
        {
            for(i=n; i<=m; i++)
            {
                cout << i << " ";
                sum=sum+i;
            }
            cout << "Sum=" << sum << endl;
        }
        else
        {

            for(i=m; i<=n; i++)
            {
                cout << i << " ";
                sum=sum+i;
            }
            cout << "Sum=" << sum << endl;

        }
    }

    return 0;
}
