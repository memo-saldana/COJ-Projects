#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x,t;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>str;
        x=(str.at(str.length()-1)-48)+(str.at(str.length()-2)-48)*10;
        if(x%4==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
