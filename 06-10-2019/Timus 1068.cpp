#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,sum=0;
    cin >> num;
    if(num>0)
    {
        for(i=1;i<=num;i++)
        {
            sum=sum+i;
        }
        cout << sum << endl;
    }
    else
    {
        for(i=num;i<=1;i++)
        {
            sum=sum+i;
        }
        cout << sum << endl;
    }
    return 0;
}
