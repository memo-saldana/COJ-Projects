#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,t,ans;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        ans=3*pow(x,2)+2;
        cout<<ans<<endl;
    }

    return 0;
}
