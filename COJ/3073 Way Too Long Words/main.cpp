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

    if(str.length()>10)
    {
      cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
    }
    else
    {
    cout<<str<<endl;

    }
  }
  return 0;
}
