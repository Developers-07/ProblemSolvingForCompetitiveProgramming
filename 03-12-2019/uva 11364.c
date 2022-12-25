#include<stdio.h>
int main()
{
    int t,i,num,ar[100],l,j,max,min,k,ans;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&num);
        for(j=0;j<num;j++)
        {
            scanf("%d",&ar[j]);
        }
        max=ar[0];
        for(l=1;l<num;l++)
        {
            if(max<ar[l])
            {
                max=ar[l];
            }
        }
        min=ar[0];
        for(k=0;k<num;k++)
        {
            if(min>ar[k])
            {
                min=ar[k];
            }
        }
        ans=max-min;
        printf("%d\n",2*ans);
    }
    return 0;
}
