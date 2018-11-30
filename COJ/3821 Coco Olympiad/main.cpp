#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int t,j,i,arr[15],sum,iMax=0;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        for(j=0;j<10;j++)
        {
            scanf("%d",&arr[j]);
        }
        sort(arr,arr+10);
        for(j=1;j<9;j++)
        {
            sum+=arr[j];
        }
        printf("%d %d \n",i+1,sum);
        iMax=max(iMax,sum);
    }
    printf("%d",iMax);
    return 0;
}
