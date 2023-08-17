#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
int a,b,d,e,f,g;
srand(time(0));
a=rand()%100;
b=a/10; d=a%10;
cout<<" Enter the two  digit integer number: ";
cin>>e;
f=e/10; g=e%10;
cout<<" Your accuracy is ";
if ((b==f && d==g)||(b==g && d==f)) cout<<" 100 % ";
else if (b==f||b==g||d==f||d==g) cout<<" 50 % ";
else cout<<" 0 % ";
cout<<" because generated number is "<<a<<endl;}
 
