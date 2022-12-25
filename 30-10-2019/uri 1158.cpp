#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,i,j,sum=0;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> x >> y;
        if(x%2==0)
        {
            x=x+1;
            for(j=1;j<=y;j++)
            {

                sum=sum+x;
                x=x+2;
            }
            cout << sum << endl;
            sum=0;
        }
        else if(x%2==1)
        {
            for(j=1;j<=y;j++)
            {

                sum=sum+x;
                x=x+2;
            }
            cout << sum << endl;
            sum=0;
        }
    }
    return 0;
}
