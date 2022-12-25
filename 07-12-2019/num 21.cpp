#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t,i,l,j;
    string ar;
    cin >> t;
    cin.ignore();
    for(i=1;i<=t;i++)
    {
        getline(cin,ar);
        l=ar.length();
        for(j=l-1;j>=0;j--)
        {
            cout << ar[j];
        }
        cout << endl;
    }
    return 0;
}
