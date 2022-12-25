#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j=0;
    double num,a;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> num;
        while(num>1)
        {
            a=num/2.0;
            num=a;
            j++;
        }
        cout << j << " days" << endl;
        j=0;
    }
    return 0;
}
