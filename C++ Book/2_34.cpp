/*
Write a program that read an integer ,
a character and a floating point number and
prints each on a new line.
Be sure to provide complete instructions ( promts ) to the user
*/

# include <iostream>
using namespace std;

int main(){
  char alpha ;
  int num {0};
  float dec {0.00};
  cout<< " Enter an Integer :"<<endl;
  cin>> num;

  cout<< " Enter an Character :"<<endl;
  cin>> alpha;

  cout<< " Enter an Floating point number :"<<endl;
  cin>> dec;

  cout<<" The Entered Integer is : "<< num<<endl;
  cout<<" The Entered Character is : "<< alpha<<endl;
  cout<<" The Entered Floating point number is : "<< dec <<endl;

  return 0;
}
