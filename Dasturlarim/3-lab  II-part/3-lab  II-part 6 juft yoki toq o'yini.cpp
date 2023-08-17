#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
int a,b,j,t;
srand(time(0));
j=rand();   a=j%2;
cout<<" random son juftmi yoki toqmi? (j=0/t=1) ";
cin>>b;
if (a==0 && b==0)cout<<" To'g'ri! "<<j<<" juft";
else if(a==0 && b==1)cout<<"noto'g'ri "<<j<<" juft";
else if(a==1 && b==0)cout<<"noto'g'ri "<<j<<" toq";
else if(a==1 && b==1)cout<<"To'g'ri "<<j<<" toq";
}

