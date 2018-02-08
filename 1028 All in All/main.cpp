#include <iostream>
#include <string>
using namespace std;

void firstTry(){

 int j,n;
    bool Found, full=false;
    string str,sub,found;


    while(cin>>sub){

        cin>>str;

        found="";
        j=0;
        for(int i=0;i<sub.length();i++){
            Found =false;

            while(!Found){

                if(sub[i]==str[j])
                {

                    Found=true;
                    found+=str[j];
                    }
                if(j==str.length()){
                    full=true;
                    break;
                }


                j++;

            }

            if(full){
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

}
int main()
{

    int j,n;
    bool Found, full=false;
    string str,sub,found;


    while(cin>>sub){

        cin>>str;

        found="";
        j=0;
        for(int i=0;i<sub.length();i++){
            Found =false;

            while(!Found){

                if(sub[i]==str[j])
                {

                    Found=true;
                    found+=str[j];
                    }
                if(j==str.length()){
                    full=true;
                    break;
                }


                j++;

            }

            if(full){
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
}
