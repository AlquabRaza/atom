// Write a program that prompts the user to enter an integer and then display that integer as a Character
// , then as a decimal, and finally as a float. Use separate print statements.


#include <iostream>
using namespace std;

int main(){
  int num{};
  cout<<" Please Enter the Desired number: "<<endl;
  cin>>num;
  cout<<"The number as a character : "<<(char)num<<endl;
  cout<<"The number as a decimal : "<<(double)num<<endl;
  cout<<"The number as a float : "<<(float)num<<endl;

  return 0;
}
