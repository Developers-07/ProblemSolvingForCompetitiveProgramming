#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int j=0;
    float num,ar[3],ans;
    while(1)
    {
        cin >> num;
        if(num>=0 && num<=10)
        {
            ar[j]=num;
            j++;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
        if(j>1)
        {
            break;
        }
    }
    ans = (float)(ar[0]+ar[1])/2;
    cout << fixed;
    cout << "media = " << setprecision(2) << ans << endl;
    return 0;
}
