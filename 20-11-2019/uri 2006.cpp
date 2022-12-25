#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,num,i,c=0;
    cin >> t;
    for(i=1;i<=5;i++)
    {
        cin >> num;
        if(num==t)
        {
            c=c+1;
        }
    }
    cout << c << endl;
    return 0;
}
