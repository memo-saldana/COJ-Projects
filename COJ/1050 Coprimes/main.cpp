#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    int n,total=0;
    cin>>n;
    for(int i=n;i>0;i--){
        if(__gcd(n,i)==1){
            total++;
        }
    }
    cout<<total<<endl;
    return 0;
}
