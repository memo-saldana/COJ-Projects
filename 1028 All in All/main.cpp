#include <iostream>
#include <string>
using namespace std;

int main()
{
    int j,n;
    bool Found,fill=false;
    string str,sub,found;


    while(cin>>sub){

        cin>>str;

        found="";
        j=0;
        for(int i=0;i<sub.length();i++){
            Found =false;

            while(!Found){

                if((int)sub[i]==(int)str[j])
                {

                    Found=true;
                    found+=str[j];
                    }
                if(j==str.length()){
                    fill=true;
                    break;
                }
                j++;

            }

            if(fill){
                break;
            }
        }
            if(found==sub){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

    }

    return 0;
}
