#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int main (){
   int a;
   cout<<" Enter the time zone offset to GMT: ";
   cin>>a;
int totalsecond=time(0);
int currentsecond=totalsecond%60;
int totalminute=totalsecond/60;
int currentminute=totalminute%60;
int totalhour =totalminute/60;
int currenthour =totalhour%24;
  cout<<" Current time is "<<currenthour + a<<":"
  <<currentminute<<":"<<currentsecond<<" GMT";}

