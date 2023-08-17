#include<iostream>
using namespace std;
int main (){
double p,i,k,m, BMI;
cout<<" Massani poundlarda kriting; ";
cin>> p;
cout<<" balandlikni inchlarda kriting; ";
cin>> i;
k=0.45359237*p; m=0.0254*i;
BMI=k/m/m;
cout<<" BMI is "<<BMI;
}
