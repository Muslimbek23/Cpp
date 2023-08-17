#include<iostream>
#include<cmath>
using namespace std;
int main (){
double a,b,c,d;
cout<<" Enter the driving distance:  ";
cin>>a;
cout<<" Enter miles per gallon:  ";
cin>>b;
cout<<" Enter price per gallon: ";
cin>>c;
d=a*c/b;
cout<<" The cost of driving is $"<<d<<endl<<endl;
}
