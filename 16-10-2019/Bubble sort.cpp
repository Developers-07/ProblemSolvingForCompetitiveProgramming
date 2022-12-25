#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[100],i,j,temp;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }

        }
    }
    for(i=0;i<n;i++)
    {
        cout << ar[i] << "\t";
    }
    return 0;
}
