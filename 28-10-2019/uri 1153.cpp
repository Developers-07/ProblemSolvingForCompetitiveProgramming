#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,p=1;
    cin >> num;
    for(i=num;i>=1;i--)
    {
        p=p*i;
    }
    cout << p << endl;
    return 0;
}
