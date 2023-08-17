#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){  long int a, b, x=0;
	cin>>a;
while (a!=0){
	b=a%10;
	a/=10;
	x+=b;
	}
cout<<x;
return 0;

}
