#include <iostream>
#include <cmath>
using namespace std;
int main(){ 
char a,b;
cout<<" harfni kriting ";
cin>>a;
cout<<" bu harfning qiymati ";
b=toupper(a);
if(b=='A'||b=='B'||b=='C'||b=='D'||b=='F'){
switch(b){
case 'A':cout<<4;break;
case 'B':cout<<3;break;
case 'C':cout<<2;break;
case 'D':cout<<1;break;
case 'F':cout<<0;break;}} 
else cout<<" qiymatni noto'g'ri kritdingiz ";}
