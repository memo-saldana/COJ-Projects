#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,m,a,distance=0,cur,past=1;

    cin>>n>>m;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>cur;

            distance+=abs(past-cur-(m-1));


        past=cur;
        cout<<"d "<<distance<<endl;
    }
    cout<<distance<<endl;

    return 0;
}
