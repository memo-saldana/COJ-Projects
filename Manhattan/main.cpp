#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
  int T, X1, Y1, X2, Y2, Res;
  scanf("%i",&T);

  for(int i=0; i<T; i++)
  {
    scanf("%i %i %i %i", &X1, &Y1, &X2, &Y2);
    Res=abs(X2-X1)+abs(Y2-Y1);
    printf("%i \n",Res);
  }
  return 0;
}
