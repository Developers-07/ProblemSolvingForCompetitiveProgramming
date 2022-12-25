#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,sum=0,ans;
    //int w,x,y,z,a,ans;
    /*cin >> w >> x >> y >> z;
    a=w+x+y+z;
    ans=a-3;
    cout << ans << endl;*/
        cin >> num;
        if(num>=2 && num<=6)
        {
            sum=sum+num;
            for(i=1;i<=3;i++)
            {
                sum=sum+num;
            }
        }

    cout << ans << endl;
    return 0;
}
