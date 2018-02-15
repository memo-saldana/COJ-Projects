#include <iostream>

using namespace std;

int main()
{
    int n,times,total,current;
    do{
        cin>>n;

        if(n>0){
            times=0;
            total=0;
            for(int i=0;i<n;i++){
                cin>>current;
                total+=current;
                if(total%100==0&&total>=100){

                    times++;
                    total=0;
                }
            }
            cout<<times<<endl;
        }
    }while(n!=-1);

}
