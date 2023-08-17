#include <iostream>
#include <cstring>
using namespace std;
void s(string &a,   char &b){   int d=0;
	for (int e=0; e<a.length(); e++)
	if(a.at(e)==b){d=1;   break;}
	if(d==1) cout<<" topildi ";
	else cout<<" topilmadi ";}

int main (){
	string a;   char  b;
	cin>>a>>b;
	s(a);
	
	return 0;
}
