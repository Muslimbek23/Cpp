#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main(){  int x1, x2, y1, y2;
cin>>x1>>y1>>x2>>y2;

cout<<"y="<<fixed<<setprecision(2)<<1.0*(y1-y2)/(x1-x2)<<"*x+"
<<fixed<<setprecision(2)<<1.0*((x1-x2)*y1-(y1-y2)*x1)/(x1-x2);

return 0;
}
