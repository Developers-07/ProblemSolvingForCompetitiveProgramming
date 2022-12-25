#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n,sum=0,a;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        while(n>0)
        {
            a=n%10;
            sum=sum*10+a;
            n=n/10;
        }
        cout << sum << endl;
        sum=0;
    }
    return 0;
}
