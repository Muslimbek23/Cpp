#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){ 
   int a;           string b;
   cin>>a;         cin>>b;
   if(b=="fev")
 {
 
  if(( a%400==0||(a%100!=0 && a%4==0) ) )
cout<<"29";
  else cout<<28;
}
  
  else{
  
if(b=="yan" ||b=="mar" ||b=="may"  ||b=="iyl" ||b=="avg" ||b=="okt" ||b=="dek")   cout<<"31";
           
 else if (b=="apr" ||b=="iyn" ||b=="sen"  ||b=="noy")
    cout<<"30";

 }
 	
 return 0;	
 	
 }      
