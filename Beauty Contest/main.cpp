#include <iostream>
#include <algorithm>
#define MAXN 1010
using namespace std;

void bubbleSort(int x[], int n) {
    bool exchanges;
    do {
       exchanges = false;
       for (int i=0; i<n-1; i++) {
          if (x[i] > x[i+1]) {
             double temp = x[i];
             x[i] = x[i+1]; x[i+1] = temp;
             exchanges = true;  // after exchange, must look again
          }
       }
    } while (exchanges);
 }

int main(){

  int n,m,i,arr[1010],ans;
  cin >> n>>m;
  for(i=0; i<n; i++){
      cin >> arr[i];
    }

    bubbleSort(arr,n);
ans=0;
  for(i=0; i<(n-m);i++){
    ans+=arr[i];
  }
  if(ans<0)
  {
    ans*=-1;
  }
  cout<<ans;

  return 0;
}
