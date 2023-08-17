#include <iostream>
#include <cmath>
using namespace std;
int main(){        double x, y, z;     int a, b, k, m;
  cin>>a>>b;
  x=a%10;   y=b%4; if(y==0) y=4;
      k=pow(x,y);
  cout<<k%10;
  
  return 0;
}
