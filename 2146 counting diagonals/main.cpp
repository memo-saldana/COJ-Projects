#include <iostream>

using namespace std;

int main()
{
    long int v,d;
    cin>>d>>v;
    if((v*(v-3)/2)==d){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
