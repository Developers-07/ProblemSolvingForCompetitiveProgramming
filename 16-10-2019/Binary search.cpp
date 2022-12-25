#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,ar[100],i,key,hi,lo,mid;
    cin >> num;
    for(i=0; i<num; i++)
    {
        cin >> ar[i];
    }
    cin >> key;
    lo=0;
    hi=num-1;
    mid = (lo+hi)/2;
    while(lo<=hi)
    {
        if(key<ar[mid])
        {
            hi=mid-1;
        }
        else if(key>ar[mid])
        {
            lo=mid+1;
        }
        else if(key==ar[mid])
        {
            cout << mid << endl;
            break;
        }
        mid=(lo+hi)/2;
    }
    return 0;
}

