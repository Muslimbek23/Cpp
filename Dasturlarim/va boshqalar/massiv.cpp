#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int a[100], c=0, d=0, n, s=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];  c+=a[i];
	}
	double x=c*1.0/n;
	for(int i=0; i<n; i++){
		if(a[i]<x) {
		d+=a[i]; s++;
	    }
	}
	cout<<fixed<<setprecision(2)<<d*1.0/s;
	return 0;
}
