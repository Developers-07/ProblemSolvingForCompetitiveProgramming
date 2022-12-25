#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int num,i,x,sum=0,s=0,u=0,v=0;
    double a,b,c;
    char y;
    cin >> num;
    for(i=1;i<=num;i++)
    {
        cin >> x >> y;
        if(y=='C')
        {
            s=s+x;
        }
        else if(y=='R')
        {
            u=u+x;
        }
        else if(y=='S')
        {
            v=v+x;
        }
        sum=sum+x;

    }
    cout << "Total: " << sum << " cobaias" << endl;
    cout << "Total de coelhos: " << s << endl;
    cout << "Total de ratos: " << u << endl;
    cout << "Total de sapos: " << v << endl;
    a=(s/(float)sum)*100;
    b=(u/(float)sum)*100;
    c=(v/(float)sum)*100;
    cout << fixed;
    cout << "Percentual de coelhos: " << setprecision(2) << a << " " << "%" << endl;
    cout << "Percentual de ratos: " << setprecision(2) << b << " " << "%" << endl;
    cout << "Percentual de sapos: " << setprecision(2) << c << " " << "%" << endl;
    return 0;

}
