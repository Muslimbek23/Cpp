#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,j,t;
cout<<" Enter the exchange rate from dollars to RMB: "; cin>>a;
cout<<" Enter 0 to convert dollars to RMB and 1 vice versa: ";
 cin>>b;
if (b==0){
 cout<<" Enter the dollar amount: "; cin>>j;
cout<<j<<" is "<<a*j<<" yuan ";}
else{
 cout<<" Enter the yuan amount: "; cin>>j;
cout<<j<<" is "<<j/a<<" dollar";}
}
