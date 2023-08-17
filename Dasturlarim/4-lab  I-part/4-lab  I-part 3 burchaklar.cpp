#include <iostream>
#include <cmath>
using namespace std;
int main(){
double d=180/M_PI,x1,y1,x2,y2,x3,y3,a,b,c,A,B,C;
cout<<" uchta nuqtani kriting; ";
cin>>x1>>y1>>x2>>y2>>x3>>y3;
 a=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
 b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
 c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
      A=acos((a*a-b*b-c*c)/(-2*b*c));
      B=acos((b*b-a*a-c*c)/(-2*c*a));
      C=acos((c*c-b*b-a*a)/(-2*a*b));
cout<<" bu uchta burchak "<<A*d<<", "<<B*d<<" va "<<C*d;
	  
	  }
