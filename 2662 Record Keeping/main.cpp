#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,check;
    cin>>n;

    string str[n][3],sub[n][4];

    for(int i=0; i<n;i++){
        for(int j=0;j<3;j++){
            cin>>str[i][j];
        }

    }

    for(int i=0;i<n;i++){
        check=0;

        if(i==0){
            for(int j=0;j<3;j++){
                sub[i][j]=str[i][j];

            }
            sub[i][3]=1;
        }else{
            for(int j=0;j<3;j++){
                    for(int k=0;k<3;k++){
                        if(str[i][j]==sub[i][k]){

                            check++;
                        }

                }
            }

        }
        if(check==3){
            sub[]
        }




    }



    return 0;
}
