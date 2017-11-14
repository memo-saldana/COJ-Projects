#include <iostream>

using namespace std;

int main()
{
    int x=0,j=0,i=1;

    while(i=1)
    {
        cin>>x;
        if(x==0)
        {
            return 0;
        }
        cout<<"The parity of ";
        while(x!=0)
        {
            if(x%2==1)
            {
                j++;
            }
            cout<<(x%2);
            x/=2;
        }
        cout<<" is "<<j%2<<" (mod 2)."<<endl;
        }
    return 0;
}
