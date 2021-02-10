/*
Write a program that coverts and prints a user-supplied
measurement in inches into :
a)- foot   c)- centimeter
b)- yard   d)- meter
*/

#include <iostream>
using namespace std;

int main(){
  double measure {}, foot{}, cm{}, yar{}, met{};
  const double f{12}, c{2.54}, y{36}, m{39.37};
  cout<<"Enter the measurement to be converted (in inches) : "<<endl;
  cin>>measure;
  foot= measure/f;
  cm= measure/c;
  yar= measure/y;
  met= measure/m;
  cout<<"The entered measurement in different units is as follows: "<<endl;
  cout<<"Foot = "<< foot<< endl;
  cout<<"Yard = "<< yar<< endl;
  cout<<"Centimeter = "<< cm<< endl;
  cout<<"Meter = "<< met<< endl;

    return 0;
}
