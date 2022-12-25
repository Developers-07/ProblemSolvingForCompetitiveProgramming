#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,y,j,sum=0,k,a=1;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> x >> y;
        for(j=1;j<=y;j++)
        {
            for(k=1;k<=j;k++)
            {
                a=a*x;

            }
            sum=sum+a;
            a=1;
        }
        cout << "Result = " << sum+1 << endl;
        sum=0;
    }
    return 0;
}
