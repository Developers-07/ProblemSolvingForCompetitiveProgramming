#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a<b && b<c)
    {
        cout << a << "\t" << b << "\t" << c << endl;
    }
    else if(a<b && b>c)
    {
        cout << a << "\t" << c << "\t" << b << endl;
    }
    else if(a>b && b>c)
    {
        cout << c << "\t" << b << "\t" << a << endl;
    }
    else if(a<b && a>c)
    {
        cout << c << "\t" << a << "\t" << b << endl;
    }
    else if(a>b && c>b)
    {
        cout << b << "\t" << c << "\t" << a << endl;
    }
    else if(a>b && c>a)
    {
        cout << b << "\t" << a << "\t" << c << endl;
    }
    return 0;
}
