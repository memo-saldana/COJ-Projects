#include <bits/stdc++.h>


using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	long int r;
	do{
		cin>>n;
		if(n>0){
			r=0;
			for(int i=0;i<=n;i++){

				r+=pow(2,i);

			}

			cout<<r<<endl;
		}
	}while(n!=0);



}