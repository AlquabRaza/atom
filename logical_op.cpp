#include <iostream>
using namespace std;
int main()
{
  int num{};
  const int lower{30}, upper{40};
  cout<<"Enter an Integer between "<<lower<<" and "<<upper<<" : "<<endl;
  cin>>num;
  cout<<boolalpha;
  bool satis_cond{0},unsatis_cond{0};
  satis_cond=(num>=30 && num<=40);
  unsatis_cond=(num<30 && num>40);
  cout<<"The condition is met: "<<satis_cond<<endl;
  cout<<"The condition is not met: "<<unsatis_cond<<endl;

  return 0;
}
