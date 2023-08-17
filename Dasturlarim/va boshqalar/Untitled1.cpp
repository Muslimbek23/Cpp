#include <iostream>
using namespace std;
void fib(long int x,double t=0){
for(int i=1;i<=x; i++)
t+=1.0/i;
cout<<t;	
}
int main(){
   long int x,t;
	cin>>x;
    fib(x,t);
	return 0;
}
