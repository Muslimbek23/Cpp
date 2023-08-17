#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){   
     int a, b;
	 cin>>a>> b; 
   if(a+b==2 || a+b==3 || a+b==12)   cout<<"You lose";  
   if(a+b==7 || a+b==11 )      cout<<"You win";
   if(a+b==4 || a+b==5 || a+b==6 || a+b==8 || a+b==9 || a+b==10){
   cin>>a>>b;   	
   	if(a+b==7 )   cout<<"You lose";   
	else  cout<<"You win";
   
   }

	return 0;
}
