#include <iostream>

using namespace std;

int main()
{
    int d,h,m,total=0;
    cin>>d>>h>>m;

    if(d<11||d==11&&h<11||d==11&&h==11&&h<11){
        total=-1;
    }
    else{
        total=(d*1440)+(h*60)+m-16511;
    }

    cout<<total<<endl;

    return 0;
}
