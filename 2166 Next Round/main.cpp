#include <iostream>

using namespace std;

int main()
{
    int t, n, k, val,total;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>n>>k;
        total=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n; i++){
            if(arr[i]>=arr[k-1]&& arr[i]>0){
                total++;
            }
        }
        cout<<total<<endl;
    }

}
