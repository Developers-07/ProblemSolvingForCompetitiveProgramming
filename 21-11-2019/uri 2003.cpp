#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a;
    while(scanf("%d",&num)!=EOF)
    {
        scanf(":%d",&a);
        if(num==7)
        {
            cout << "Atraso maximo: " << a << endl;
        }
        else if(num==8)
        {
            cout << "Atraso maximo: " << a+60 << endl;
        }
        else if(num==9)
        {
            cout << "Atraso maximo: " << 120 << endl;
        }
        else
        {
            cout << "Atraso maximo: " << 0 << endl;
        }
    }
    return 0;
}
