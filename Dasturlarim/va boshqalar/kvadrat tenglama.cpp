#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main (){
 double a, b, c, d, x1, x2;
cin>>a>>b>>c;
  d=b*b-4*a*c;
if(d<0) cout<<"Yechimi yo'q";
else if (d==0) {
	x1=-b/2/a;  cout<<fixed<<setprecision(3)<<x1<<" "<<x1;
}	
else {
	x1=(-b+sqrt(d))/2/a;   x2=(-b-sqrt(d))/2/a; 
	cout<<fixed<<setprecision(3)<<x1<<" "<<x2;
	
}	
	return 0;
}
