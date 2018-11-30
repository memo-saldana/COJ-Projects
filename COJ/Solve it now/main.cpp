#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, ans;
    cout <<setprecision(4);
    cin >> a;

    ans=(1/(pow(a,2))*10000);
    cout << ans << endl;
    trunc(ans);
    ceil(ans);
    cout<<ans <<endl;
    ans=ans/10000;

    cout << ans<<endl;
    return 0;
}
