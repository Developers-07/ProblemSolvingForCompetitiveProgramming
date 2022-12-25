#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a;
    for(i=1;i<=9;i=i+2)
    {
        a=7;
        for(j=1;j<=3;j++)
        {
            cout << "I=" << i << " " << "J=" << a <<  endl;
            a--;
        }
    }
    return 0;
}
