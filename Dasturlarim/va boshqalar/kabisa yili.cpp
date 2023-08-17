#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void kabisa(int n, int b){
	if(n%400==0 || (n%4==0 && n%100!=0))
	cout<<29;
	else cout<<28;
}

int main(){   
     int n, b;
	 cin>>n; 
  kabisa(n, b);
	return 0;
}
