#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"enter the range=";
    cin>>n;
    cout<<"enter the lower range=";
    cin>>a;
    cout<<"enter the higher range=";
    cin>>b;
    srand(time(0));
    cout<<"\nRandom numbers generated:"<<endl;

  for(int i=0;i<n;i++)
      cout << (rand() % 10) + 1<<" ";
  return 0;
}

