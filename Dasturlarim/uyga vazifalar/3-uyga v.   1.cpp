#include <iostream>
#include <cstring>
using namespace std;
int main(){ int n;
cin>>n;
string e="2.7182818284590452353602875";
if(n>0&&n<25)
{
for(int a=0;a<n+1;a++)
	cout<<e.at(a);
if(e.at(n+2)>='5')
    cout<<static_cast<char>(e.at(n+1)+1);
else cout<<e.at(n+1);}

else if(n==0)cout<<3;
else cout<<e;}
