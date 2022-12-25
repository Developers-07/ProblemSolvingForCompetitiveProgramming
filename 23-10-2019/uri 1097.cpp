#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a=7;
    for(i=1;i<=9;i=i+2)
    {
        for(j=1;j<=3;j++)
        {
            cout << "I=" << i << " " << "J=" << a << endl;
            a--;
        }
        a=a+5;
    }
    return 0;
}
