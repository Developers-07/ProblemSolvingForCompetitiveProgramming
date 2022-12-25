#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p,j=0;
    for(i=1; i<=100; i++)
    {
        cin >> n;
        if(n>j)
        {
            j=n;
            p=i;
        }
    }

    cout << j << endl;
    cout << p << endl;
    return 0;
}
