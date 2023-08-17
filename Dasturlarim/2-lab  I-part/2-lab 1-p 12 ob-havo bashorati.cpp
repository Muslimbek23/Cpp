#include<iostream>
#include <cmath>
using namespace std;
int main (){
double v,ta,t;
cout<<" Enter the temperature in Fahrenheit:  ";
cin>> ta;
cout<<" Enter the wind speed in miles per hour:  ";
cin>> v;
 t=35.74+0.6215*ta-35.75*pow(v, 0.16)+0.4275*ta*pow(v, 0.16);
cout<<" The wind chill index is; "<<t;
}
