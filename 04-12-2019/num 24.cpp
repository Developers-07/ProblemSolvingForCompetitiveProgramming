#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,num,ar[101],j,k,z;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> num;
        for(j=1; j<=num; j++)
        {
            cin >> ar[j];
        }
        for(k=1; k<=num; k=k+2)
        {
            if(num%2!=0)
            {
                if(k==num)
                {
                    z=ar[k];
                    cout << z << endl;
                }

                else
                {
                    z=ar[k];
                    cout << z << " ";
                }
            }
            else
            {
                if(k==num-1)
                {
                    z=ar[k];
                    cout << z << endl;
                }
                else
                {
                    z=ar[k];
                    cout << z << " ";
                }
            }

        }
    }

    return 0;
}
