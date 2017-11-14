#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long x, y,ans;

    scanf("%lld %lld",&x,&y);
    int imin=abs(x-y);
    ans=(x+y-1-abs(x-y))*(abs(x-y)+(x+y))/2;
    printf("%lld",ans);
    return 0;
}
