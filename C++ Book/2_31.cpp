// Write a Program that prompts the user to enter a quantity and a cost.
// The Values are to be read into an integer named quantity and a float named
// Unitprice. Define the variables, and use only one statement to read the values.
// After reading the values, skip one line and print each value , with an appropriate name on
// a seperate line.

# include <iostream>
using namespace std;

int main(){
  int quantity{0};
  float unitprice{0.00};
  cout<<"Enter the total quantity and unitprice with a spqce in btw:"<<endl;
  cin>>quantity>>unitprice;
  cout<<"\n The total Quantity is: " << quantity<<endl;
  cout<<"\n The Unit Price is: " << unitprice <<endl;
  return 0;
}
