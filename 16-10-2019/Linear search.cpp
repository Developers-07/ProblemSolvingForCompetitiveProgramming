#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,ar[100],i,key,x;
    cin >> num;
    for(i=1;i<=num;i++)
    {
        cin >> ar[i];
    }
    cin >> key;
    for(i=1;i<=num;i++)
    {
        if(ar[i]==key)
        {
            x=i;
            cout << x << endl;
            break;
        }
    }


    return 0;
}

