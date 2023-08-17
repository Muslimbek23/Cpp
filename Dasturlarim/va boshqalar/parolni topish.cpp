#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
 unsigned a, b, c, parol;  
 srand(time(0));
 	parol=rand()%100000;
 	srand(time(0));
 	cin>>a;
	if(a==parol) cout<<"parol topildi";
	
	for(int i=0; i<100000; i++){
		if(parol==i) cout<<i;
	}
	
	
	
	return 0;
	}
