#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
srand(time(0));
double r,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,k=M_PI/180;
cout<<" Enter the radius of the bounding circle: ";
cin>>r;
x1=r*cos(18*k);   y1=r*sin(18*k);
x2=r*cos(90*k);   y2=r*sin(90*k);
x3=r*cos(162*k);  y3=r*sin(162*k);
x4=r*cos(234*k);  y4=r*sin(234*k);
x5=r*cos(306*k);  y5=r*sin(306*k);
cout<<" The coordinates of five points on the pentagon are \n("
<<x1<<", "<<y1<<") \n("
<<x2<<", "<<y2<<") \n("
<<x3<<", "<<y3<<") \n("
<<x4<<", "<<y4<<") \n("
<<x5<<", "<<y5<<") \n";
}
