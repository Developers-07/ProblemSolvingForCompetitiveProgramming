#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,s=0,Z,n=0,i;

    cin >> X;

    while ( Z<=X)
    { 
         cin >> Z;
    }
    for (i=X; s<=Z; i++)
    {
        s=s+i;
        n++;
    }

      cout << n << endl;

    return 0;
}
