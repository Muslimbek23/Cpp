#include <iostream>
#include <cmath>
using namespace std;
int main(){
double d,x1,y1,x2,y2,r=6371.1,k=M_PI/180;
cout<<"Enter point 1 (latitude and longitude) in degrees "; 
cin>>x1>>y1;
cout<<"Enter point 2 (latitude and longitude) in degrees: ";
cin>>x2>>y2;
 d=r*acos(sin(x1*k)*sin(x2*k)+cos(x1*k)*cos(x2*k)*cos((y1-y2)*k));
cout<<" The distance between the two points is "<<d<<" km";
}
