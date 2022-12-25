#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,num;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> num;
        if(num%2==0)
        {
            cout << "0" << endl;
        }
        else if(num!=0)
        {
            cout << "1" << endl;
        }
    }
    return 0;
}
