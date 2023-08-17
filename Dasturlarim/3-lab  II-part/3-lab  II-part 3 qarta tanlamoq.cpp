#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
srand(time(0));
cout<<" siz olgan karta ";

switch(rand()%13){
	
case 0:cout<<" 2";break;
case 1:cout<<" 3";break;
case 2:cout<<" 4";break;
case 3:cout<<" 5";break;
case 4:cout<<" 6";break;
case 5:cout<<" 7";break;
case 6:cout<<" 8";break;
case 7:cout<<" 9";break;
case 8:cout<<" 10";break;
case 9:cout<<" tuz";break;
case 10:cout<<" karol";break;
case 11:cout<<" dama";break;
case 12:cout<<" valit";break;}

switch(rand()%4){
	
case 0:cout<<" g'ish.";break;
case 1:cout<<" toppon.";break;
case 2:cout<<" qarg'a.";break;
case 3:cout<<" chillik";break;}
}
