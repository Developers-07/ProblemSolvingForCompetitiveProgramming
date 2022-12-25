#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,i,j,x,y,gcd,lcm;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> x >> y;
        if(x>y)
        {
            for(j=y;j>=1;j--)
            {
                if(x%j==0 && y%j==0)
                {
                    gcd=j;
                    break;
                }
            }
        }
        else if(y==0 || x==y)
        {
            gcd=y;
        }
        else if(y>x)
        {
            for(j=x;j>=1;j--)
            {
                if(x%j==0 && y%j==0)
                {
                    gcd=j;
                    break;
                }
            }
        }
        lcm=(x*y)/gcd;
        cout << "LCM = " << lcm << endl;
    }
    return 0;
}
