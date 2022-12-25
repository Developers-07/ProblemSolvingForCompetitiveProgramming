#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[50],num,i;
    cin >> num;
    ar[1]=0;
    ar[2]=1;
    for(i=3;i<=num;i++)
    {
        ar[i]=ar[i-1]+ar[i-2];
    }
    for(i=1;i<=num;i++)
    {
        if(i==num)
        {
            cout << ar[i] << endl;
        }
        else
        {
              cout << ar[i] << " ";
        }
    }
    return 0;
}
