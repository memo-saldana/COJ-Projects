#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()
{
int T, Sum;
string s;
cin>>T;

for(int i=0; i<T; i++)
{
    Sum=0;
    cin >> s;
    int size = s.length();

    for(int j=0; j<size; j++)
    {
        Sum+=s[j]-48;
    }

    if(Sum%3==0 && (s[s.size()-1])%2==0)
    {
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
}
return 0;
}
