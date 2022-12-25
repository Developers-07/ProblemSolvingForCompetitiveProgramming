#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,j;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> x;
        for(j=x;j>=0;j--)
        {
            if(j==1)
            {
                cout << "2" << " + ";
            }
            else if(j==0)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2^" << j << " + ";
            }
        }
    }
    return 0;
}
