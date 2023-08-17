#include <iostream>    
#include <iomanip>   
using namespace std;   
int main()

int unlik;  
cin>>unlik;
 string s;
 while(unlik!=0){
 	int unolti=unlik%16;
 	char x;
 	if(0<=unolti && unolti<=9)
 	x=unolti+'0';
 	else  x=unolti-10+'A';
 	
 	unlik=unlik/16;
	 s=x+s;
 }
 cout<<" 16 likdagi "<<s;				
}
 
