#include <iostream>
using namespace std;

void doFibonacciSeq(int iLength)
{
  int iF1, iF2, iFn, iCount;
  iF1 = 0;
  iF2 = 1;
  iFn = 0;
  
  for(iCount = 1; iCount <= iLength; iCount++)
  {
    cout << iFn << " ";
    iF1 = iF2;
    iF2 = iFn;
    iFn = iF1 + iF2;
  }
}

int main()
{
  int iLength;
  
  cout << "Input length of sequence: ";
  cin >> iLength;
  cout << endl;
  
  doFibonacciSeq(iLength);
  
  return 0;
}