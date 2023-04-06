#include <iostream>
#include <math.h>
using namespace std;
double f_for(double x)
{ double S = 0;
for (int k=2; k<=9; k++) 
S += tan(x)-(x*x/(k))/((k*k)-1); 
 return S; 
}
double f_while (double x)
{ double S = 0; int k = 2;
 while (k <= 9) {
  S += tan(x)-(x*x/(k))/((k*k)-1); k++; }
 
  return S;
}
double f_dowhile (double x)
{ double S = 0; int k = 2;
 do
 { S += tan(x)-(x*x/(k))/((k*k)-1);
 k++;
 }
 while (k <= 9);
 return S;
  }
  int main (){
double x;
cout<<" Ввести х = "; cin >> x;
cout<<"for S = "<< f_for(x) << endl;
cout<<"while S = "<< f_while(x) << endl;
cout<<"do-while S = "<< f_dowhile(x) << endl;
}