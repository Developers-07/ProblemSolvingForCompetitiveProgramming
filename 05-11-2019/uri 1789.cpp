#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int num,ar[501],i,max;
    while(scanf("%d",&num)!=EOF)
    {
        for(i=1; i<=num; i++)
        {
            cin >> ar[i];
        }
        max=ar[1];
        for(i=2; i<=num; i++)
        {
            if(ar[i]>max)
            {
                max=ar[i];
            }
        }
        if(ar[1]==max)
        {
            max=ar[1];
        }
        if(max<10)
        {
            cout << "1" << endl;
        }
        else if(max>=10 && max<20)
        {
            cout << "2" << endl;
        }
        else if(max>=20)
        {
            cout << "3" << endl;
        }
    }
    return 0;
}
