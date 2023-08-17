#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int main (){
   int a,b;
   cout<<" Enter the time zone offset to GMT: ";
   cin>>a;
int totalsecond=time(0);
int currentsecond=totalsecond%60;
int totalminute=totalsecond/60;
int currentminute=totalminute%60;
int totalhour =totalminute/60;
int currenthour =totalhour%24;
  cout<<" Current time is ";b=currenthour + a;
  if(b<=12) cout<<b;
  else cout<<b%12;
  cout<<":"<<currentminute<<":"<<currentsecond;
  if (b<=12) cout<<" AM";
  else cout<<" PM";
  }

