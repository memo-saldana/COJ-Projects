#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D,N;

    cin>>A>>B>>C>>D;

    for(int i=0;i<3;i++){

        cin>>N;

        cout<<N % (A+B) <<endl;

        if( N % (A+B) <=A && N % (C+D)<=C){
            cout<<"both"<<endl;
        }
        else if(N%(A+B)>A && N%(C+D)>C){
            cout<<"none"<<endl;
        }
        else{
            cout<<"one"<<endl;
        }
    }
}
