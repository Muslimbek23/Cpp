 #include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int n; cin>>n;
	int a=0,b=1,d;
for(int e=1;e<=n;e++){
	//cout<<a<<" ";
	d=a;
	a=a+b;
	b=d;
}cout<<d;

}
