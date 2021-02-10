#include <iostream>
using namespace std;
int main(){
  // bool equal_result {false};
  // bool not_equal_result {false};
  // int num1{}, num2{};
  // cout<<boolalpha;
  // cout<< "Enter 2 integers separated by space:"<<endl;
  // cin>>num1>>num2;
  // equal_result = (num1==num2);
  // not_equal_result = (num1!=num2);
  // cout<<"Comparision result for equality:"<<equal_result<<endl;
  // cout<<"Comparision result for inequality:"<<not_equal_result<<endl;
  //
  // bool equal_result {false};
  // bool not_equal_result {false};
  // char ch1{}, ch2{};
  // cout<<boolalpha;
  // cout<< "Enter 2 Characters separated by space:"<<endl;
  // cin>>ch1>>ch2;
  // equal_result = (ch1==ch2);
  // not_equal_result = (ch1!=ch2);
  // cout<<"Comparision result for equality:"<<equal_result<<endl;
  // cout<<"Comparision result for inequality:"<<not_equal_result<<endl;

  int n1{}, n2{};
  cout<<boolalpha;
  cout<< "Enter 2 Integers separated by space:"<<endl;
  cin>>n1>>n2;
  cout<<"Integer 1 is Greater than Integer 2:"<<(n1>n2)<<endl;
  cout<<"Integer 1 is Greater or equal to Integer 2:"<<(n1>=n2)<<endl;
  cout<<"Integer 1 is Lesser or equal to Integer 2:"<<(n1<=n2)<<endl;
  cout<<"Integer 1 is Less than Integer 2:"<<(n1<n2)<<endl;

  return 0;
}
