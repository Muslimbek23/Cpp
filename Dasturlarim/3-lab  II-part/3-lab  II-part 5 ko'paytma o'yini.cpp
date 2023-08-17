#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
int a,b,d,e,f,g;
srand(time(0));
a=rand()%17;
b=rand()%17;
cout<<a<<"*"<<b<<"=? ";
cin>>d;
if(a*b==d)cout<<"to'g'ri!";
else cout<<"xato! To'g'ri javob "<<a*b;
}
