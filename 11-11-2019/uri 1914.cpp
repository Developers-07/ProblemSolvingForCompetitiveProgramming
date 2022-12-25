#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    long long int num1,num2,ans;
    char ar[101],ar2[6],ar3[101],ar4[6];
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> ar >> ar2 >> ar3 >> ar4;
        cin >> num1 >> num2;
        ans=num1+num2;
        if(ar2[0]=='P')
        {
            if(ans%2==0)
            {
                cout << ar << endl;
            }
            else if(ans%2!=0)
            {
                cout << ar3 << endl;
            }
        }
        else if(ar2[0]=='I')
        {
            if(ans%2==0)
            {
                cout << ar3 << endl;
            }
            else if(ans%2!=0)
            {
                cout << ar << endl;
            }
        }
    }
    return 0;
}
