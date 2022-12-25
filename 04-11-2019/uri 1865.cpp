#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    char str[100];
    int t,i,num;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> str >> num;
        if(!strcmp(str,"Thor"))
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
    return 0;
}
