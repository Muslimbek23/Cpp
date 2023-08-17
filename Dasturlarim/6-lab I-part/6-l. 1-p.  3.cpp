#include <bits/stdc++.h>
using namespace std;
void d(int n){
	for (; n!=0; n--){
	for (int a=1;a<=n;a++)
	cout<<"*";
	cout<<endl;	}}

int main (){
	int a;
	cin>>a;
	d(a);
	
	return 0;
}
