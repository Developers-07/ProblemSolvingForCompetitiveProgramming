#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a,b=0,temp;
    cin >> num;
    temp=num;
    while(num>0)
    {
        a=num%10;
        b=b*10+a;
        num=num/10;
    }
    cout << b << endl;
    if(b==temp)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not a Palindrome Number" << endl;
    }
    return 0;
}
