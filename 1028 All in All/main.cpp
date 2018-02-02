#include <iostream>
#include <string>
using namespace std;

int main()
{
    int space;
    bool bFlag=false;
    string str,sub;
    getline(cin, str);

    space= str.find(' ');
    sub = str.substr(space+1);

    cout<<space<<endl<<sub;
    int j=0;
    for(int i=0;i<space;i++){
        for(;j<sub.length();j++){
            if(str[i]==sub[j]){
                break;
            }
        }
    }

    return 0;
}
