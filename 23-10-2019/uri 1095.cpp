#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,c=0;
    for(j=60;j>=0;j=j-5)
    {
        c=c+1;
        cout << "I=" << c << " " << "J=" << j << endl;
        c=c+2;
    }
    return 0;
}
