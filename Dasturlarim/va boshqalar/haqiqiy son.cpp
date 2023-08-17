#include <iostream>    
#include <iomanip>   
using namespace std;   
int main()
{
string s;  
cin>>s;
char q[s.length()];
for(int i=0; i<s.length(); i++){
	q[i]=s[i];
}

for(int i=0; i<s.length(); i++){
	cout<<q[i]<<" ";
}


}
 
