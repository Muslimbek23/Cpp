#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,d;
//cout<<" Uchburchakning 3 ta tomonini kriting; ";
cin>>a>>b>>d;
/*if (a+b<=d || a+d<=b || b+d<=a)
cout<<" Bunday uchburchak mavjud emas ";
else */
if (a==b && b==d) cout<<"teng tomonli";
else if (a==b &&b!=d || a==d && d!=b || b==d && d!=a)
cout<<"teng yonli ";
else  cout<<"turli tomonli ";
return 0; 
}


