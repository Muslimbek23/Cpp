#include<iostream>
using namespace std;
int main (){
double x,y,z,k;
cout<<" Enter the subtotal and a gratuity rate: ";
cin>>x>>y;
z=x*y/100;
k=x+z;
cout<<" The gratuity is $"<<z<<" and total is $"<<k;

}
