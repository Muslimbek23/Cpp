#include <iostream>
#include <iomanip>
using namespace std;
int main(){double  b, c, d; int a;
cout<<" Meterlar\tfootlar\n";
for(a=1;a<16;a++)
cout<<setw(6)<<a<<"\t\t"<<fixed<<setprecision(3)<<a*3.28<<endl;
}
