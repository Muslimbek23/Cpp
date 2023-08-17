#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
int q,w,z=312032486;
cout<<"Enter the of years ";
cin>>q;
  w=q*3600*24*365;
  int x=(w/7);
  int k=(w/13);
  int l=(w/45);
cout<<"The population is "<<q<<" years is "<<x-k+l+z;

return 0;
}

