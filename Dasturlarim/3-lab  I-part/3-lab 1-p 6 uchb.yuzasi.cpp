#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,d,h,S;
cout<<" Uchburchakning 3 ta tomonini kriting; ";
cin>>a>>b>>d;
h=sqrt(3)*a/2; S=a*h/2;
if (a+b<=d || a+d<=b || b+d<=a)
cout<<" Bunday uchburchak mavjud emas ";
else if (a==b && b==d) cout<<" h="<<h<<" S="<<S;
else cout<<" Bu uchburchak teng tomonli emas ";


}


