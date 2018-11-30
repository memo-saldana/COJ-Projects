#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D,N;

    cin>>A>>B>>C>>D;

    for(int i=0;i<3;i++){

        cin>>N;

        if( N % (A+B) <=A && N % (C+D)<=C){
            cout<<"both"<<endl;
        }
        else if((N%(A+B)>A ||N%(A+B)==0)&& (N%(C+D)>C || N%(C+D)==0)){
            cout<<"none"<<endl;
        }
        else{
            cout<<"one"<<endl;
        }
    }
}
