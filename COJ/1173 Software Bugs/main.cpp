#include <string>
#include <iostream>

using namespace std;

int main()
{
    string str,str2;
    while(cin>>str2){
        getline(cin,str);
        str.insert(0,str2);
        for(int i=0;i<str.length();i++){
            if(str.substr(i,3)=="BUG"){
                str.erase(i,3);
            }
        }
        cout<<str<<endl;
    }
}
