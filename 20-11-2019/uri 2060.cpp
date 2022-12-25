#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,num,c=0,p=0,s=0,t=0,i;
    cin >> a;
    for(i=1; i<=a; i++)
    {
        cin >> num;
        if(num%2==0)
        {
            c=c+1;
        }
        if(num%3==0)
        {
            p=p+1;
        }
        if(num%4==0)
        {
            s=s+1;
        }
        if(num%5==0)
        {
            t=t+1;
        }
    }
    cout << c << " Multiplo(s) de 2" << endl;
    cout << p << " Multiplo(s) de 3" << endl;
    cout << s << " Multiplo(s) de 4" << endl;
    cout << t << " Multiplo(s) de 5" << endl;
    return 0;
}
