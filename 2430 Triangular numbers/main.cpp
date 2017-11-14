#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
  int i=1;
   int c,b=1,a=1,d;
    int x;

  while(i=1)
  {
     scanf("%d",&x);
    if(x==0)
    {
      return 0;
    }
    c=(-2*x);
    d=1-(4*c);
    if(d>0)
    {
        double sqrt1=(-b+sqrt(d))/(2*a);
        double sqrt2=(-b-sqrt(d))/(2*a);
        if(sqrt1>0&&floor(sqrt1)==sqrt1||sqrt2>0&&floor(sqrt2)==sqrt2)
        {
            printf("Y \n");
        }
        else
        {
            printf("N \n");
        }
    }
    else
    {
        printf("N \n");
    }

  }
  return 0;
}
