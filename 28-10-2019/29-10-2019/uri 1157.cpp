#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i;
    cin >> num;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
