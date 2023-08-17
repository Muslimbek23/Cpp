#include<iostream>
using namespace std;
int main (){
double M, fT, iT, Q;
cout<<" Enter the amount of water in kilogramms; ";
cin>> M;
cout<<" Enter the initial temperature; ";
cin>> iT;
cout<<" Enter the final temperature; ";
cin>>fT;
   Q=M*(fT-iT)*4184;
cout<<" The energy needed is "<<Q;
}
