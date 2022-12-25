#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,num,sum=0,j;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> num;
        for(j=1;j<num;j++)
        {
            if(num%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==num)
        {
            cout << "YES, " << num << " is a perfect number!" << endl;
        }
        else
        {
            cout << "NO, " << num << " is not a perfect number!" << endl;
        }
        sum=0;
    }
    return 0;
}
