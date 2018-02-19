#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,t;
    float m;
    do{

        cin>>n>>t;
        if(n!=0 && t!=0){
            int arr[n+1];
            arr[0]=1;
            m=ceil((double)n*((double)t/100));
            cout<<"M "<<m<<endl;
            for(int i=1; i<n+1; i++){
                cin>> arr[i];
            }
            while(arr[0]!=1){
                arr[0]=1;
            }

        }

    }while(n!=0&&t!=0);



    return 0;
}
