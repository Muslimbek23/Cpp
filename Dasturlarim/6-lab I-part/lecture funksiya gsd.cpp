#include <iostream>
using namespace std;
int gsd(int a, int b){
	int gsd=1;
	int k=2;
	while (k<=a && k<=b){
		if (a%k==0 && b%k==0)
		gsd=k;
		k++;
	}
	return gsd;
}
int main(){
	int x, y;
	cin>>x>>y;
	cout <<gsd(x, y);
	return 0;
}

