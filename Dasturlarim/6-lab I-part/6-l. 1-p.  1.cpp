#include <bits/stdc++.h>
using namespace std;
double a(long n){
	int sana=0, yig=0;
	while(!n==0){
		yig+=n%10;
		n=n/10;
		sana++;
	}
	return yig*1.0/sana;
}
int main (){
	int n;
	cin>>n;
	cout<<a;
	
	return 0;
}
