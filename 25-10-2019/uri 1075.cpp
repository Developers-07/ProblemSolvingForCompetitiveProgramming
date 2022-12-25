#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i;
    cin >> num;
    for(i=2;i<10000;i++)
    {
        if(i%num==2)
        {
            cout << i << endl;
        }
    }
    return 0;
}
