#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,i, k,t,ans;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>x>>k;
        ans=0;
    for(i=x;i>0;i--)
    {

        if(x%i==0&&i%k!=0)
        {
            ans+=i;
        }

    }
    cout<<ans<<endl;
    }


    return 0;
}
