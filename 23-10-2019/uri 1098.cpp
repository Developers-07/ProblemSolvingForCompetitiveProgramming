#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i,a=1;
    int j;
    for(i=0;i<=2.2;i=i+0.2)
    {
        for(j=1;j<=3;j++)
        {
            cout << "I=" << i << " " << "J=" << a << endl;
            a++;
        }
        a=a-2.8;
    }
    return 0;
}
