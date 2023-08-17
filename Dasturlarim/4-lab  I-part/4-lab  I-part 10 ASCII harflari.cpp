#include <iostream>
#include <cmath>
using namespace std;
int main(){ 
int  b;
char a;

cin>>a;

if (a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
cout<<"unli";
else if ((a>='A' && a<='Z')||(a>='a' && a<='z'))
cout<<"undosh";
else cout<<"none";
return 0;
}
