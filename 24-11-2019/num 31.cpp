#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    int ar[6]={6,28,496,8128,33550336};
    long long int num;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> num;
        for(j=0;j<5;j++)
        {
            if(ar[j]<=num)
            {
                cout << ar[j] << endl;
            }
            else
            {
                break;
            }
        }
        if(i!=t)
        {
            cout << endl;
        }
    }
    return 0;
}
