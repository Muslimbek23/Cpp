#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
double s,a,r;
//cout<<" Enter the length from the center to a vertex:"; 
cin>>r;
 a=2*r*sin(M_PI/5);  
 s=5*a*a/(4*tan(M_PI/5));
cout<<fixed<<setprecision(2)<<s;
}
