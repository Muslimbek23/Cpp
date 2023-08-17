#include <iostream>
#include <iomanip>
using namespace std;

bool tub (int x){
	for(int d=2; d<=x/2; d++){
		if(x%d==0)
		  return  0;
		  
	}
	return 1;
}

void tub_sonlar (int n){
	int sana=00,    number=2;
	while(sana<n){
	
	  if(tub(number)){
		sana++;
		if(sana%10==0)  cout<<setw(5)<<number<<endl;
		else cout<<setw(5)<<number;
	  }
	  number++;  	
	}
}
int main(){
	cout<<" 1- 50 ta tub son \n";
	tub_sonlar(50);
	
}
