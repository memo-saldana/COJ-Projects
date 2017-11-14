#include <iostream>

using namespace std;

int main()
{
int cases,bgoals, GoalsN,maxp=0,delta;
cin >> cases >> bgoals;
int arr[cases*2+10];
GoalsN=bgoals;
for(int i=0;i<(cases*2);i++)
{
    cin >>arr[i];
}
for(int i=0;i<GoalsN;i+=2)
{
    if(arr[i]==arr[i+1]&&bgoals>0)
    {
        arr[i]++;
        bgoals--;
    }
}
cout <<bgoals;
for(int i=0;i<GoalsN;i+=2)
{
    delta=arr[i+1]-arr[i];
    if(arr[i]>arr[i+1]&&bgoals>delta)
    {
        arr[i]+=delta+1;
        bgoals-=delta+1;
    }
}
for(int i=0;i<GoalsN;i+=2)
{
    delta=arr[i+1]-arr[i];
    if(arr[i]>arr[i+1]&&bgoals==delta)
    {
        arr[i]+=delta;
        bgoals-=delta;
    }
}
for(int i=0;i<(cases);i+=2)
{
    if(arr[i]>arr[i+1])
    {
        maxp+=3;
    }
    if(arr[i]=arr[i+1])
    {
        maxp++;
    }
}

cout <<maxp;

    return 0;
}
