#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,chars;
    string str,sub;

    do{
       cin>>n;

       if(n!=0){
            cin>>str;
            chars=str.length()/n;
            for(int i=0;i<str.length();i+=chars){
                sub=str.substr(i,chars);
                for(int i=(sub.length()-1);i>-1;i--){
                    cout<<sub[i];
                }
            }
            cout<<endl;
       }


    }while(n!=0);

    return 0;
}
