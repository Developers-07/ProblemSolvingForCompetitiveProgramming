#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,ar[1001],i,min,p;
    cin >> num;
    for(i=0;i<num;i++)
    {
        cin >> ar[i];
    }
    min=ar[0];
    p=0;
    for(i=1;i<num;i++)
    {
        if(ar[i]<min)
        {
            min = ar[i];
            p=i;
        }
    }

   cout << "Menor valor: " << min << endl;
   cout << "Posicao: " << p << endl;
   return 0;
}
