#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x,y;
cout<<" nuqtaning x va y koordinatalarini kriting ";
cin>>x>>y;
cout<<" bu nuqta uchburchakning ";
if  (y<100-x/2) cout<<"ichida ";
else if (y==100-x/2) cout<<" chizig'i ustida ";
else  cout<<" tashqarisida ";
}
