#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
int a,h,q,m,k,j;
 //cout<<" yilni kriting "; 
  cin>>a;
 //cout<<" oyni kriting (1-12) ";
  cin>>m;
 if(m<3) m=m+12;
 else m=m;
 cout<<" oyning kunini kriting (1-31) ";cin>>q;
    j=a/100; 
	  k=a%100;
 h=(q+26*(m+1)/10+k+k/4.0+j/4.0+5.0*j);
 cout<<"  Bu kun ";
 switch(h%7){
	
case 1:cout<<" shanba";break;
case 2:cout<<" yakshanba";break;
case 3:cout<<" dushanba";break;
case 4:cout<<" seshanba";break;
case 5:cout<<" chorshanba";break;
case 6:cout<<" payshanba";break;
case 0:cout<<" juma";break;
 }}
