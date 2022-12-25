#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2;
    cin >> x1 >> x2;
    if(x1>0 && x2>0)
    {
        cout << "First Quadrant" << endl;
    }
    else if(x1<0 && x2>0)
    {
        cout << "Second Quadrant" << endl;
    }
    else if(x1<0 && x2<0)
    {
        cout << "Third Quadrant" << endl;
    }
    else if(x1>0 && x2<0)
    {
        cout << "Fourth Quadrant" << endl;
    }
    else if(x1==0 && (x2>0 || x2<0))
    {
        cout << "Y Axis" << endl;
    }
    else
    {
        cout << "X Axis" << endl;
    }
    return 0;
}
