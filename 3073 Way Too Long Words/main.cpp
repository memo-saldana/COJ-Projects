#include <string>
#include <iostream>
using namespace std;

int main()
{
  int t;
  string str;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>str;

    if(str.size()-1>10)
    {
      cout<<str.at(0)<<str.size()-2<<str.at(str.size()-1)<<endl;
    }
    else
    {
    cout<<str<<endl;

    }
  }
  return 0;
}
