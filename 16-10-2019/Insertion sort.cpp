#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,ar[100],i,j,x;
    cin >> num;
    for(i=0; i<num; i++)
    {
        cin >> ar[i];
    }
    for(i=1; i<num; i++)
    {
        x=ar[i];
        j=i-1;
        while(j>=0 && ar[j]>x)
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=x;
    }
    for(i=0; i<num; i++)
    {
        cout << ar[i] << "\t";
    }
    return 0;

}
