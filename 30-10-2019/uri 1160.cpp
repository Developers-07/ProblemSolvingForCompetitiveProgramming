#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,pa,pb,i,y=0;
    double ga,gb;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> pa >> pb >> ga >> gb;
        while(pa<=pb)
        {
            pa=pa+((pa*ga)/100);
            pb=pb+((pb*gb)/100);
            y=y+1;
            if(y>100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if(y<=100)
        {
             cout << y << " " << "anos." << endl;
        }
        y=0;
    }
    return 0;
}
