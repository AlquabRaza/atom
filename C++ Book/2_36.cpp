/*
Write a program that reads 10 integers and prints the first and last in one line
, the second and the ninth in one line and so forth.
*/

#include <iostream>
using namespace std;

int main(){
  int a,b,c,d,e,f,g,h,i,j;
  cout<<"Please enter ten numbers separated by spaces: "<<endl;
  cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
  cout << " Your numbers are : "<<endl;
  cout<<a<< "  "<<j<<endl;
  cout<<b<< "  "<<i<<endl;
  cout<<c<< "  "<<h<<endl;
  cout<<d<< "  "<<g<<endl;
  cout<<e<< "  "<<f<<endl;

  return 0;

}
