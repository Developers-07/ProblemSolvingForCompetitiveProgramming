#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,j,i,t,k;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> a >> b >> c;
        for(j=a; j<=b; )
        {
            if(j%c==0)
            {
                cout << j << endl;
                j=j+c;
            }
            else
            {
                j++;
            }
        }
        cout << endl;
    }
    return 0;
}
