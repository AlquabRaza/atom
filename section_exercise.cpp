#include <iostream>
using namespace std;

int main() {
  int age;
  bool has_car;
  cout<<"Please Enter User Data:"<<endl;
  cout<<"Enter Applicant's age in Years:"<<endl;
  cin>>age;
  cout<<"Please Enter if the Applicant has a car: (0=No, 1=Yes)"<<endl;
  cin>>has_car;

    //----WRITE YOUR CODE BELOW THIS LINE----
    if(age>=16 && has_car==true){
      cout<<"yes- you can drive";
    }
      else if(age<16){
        cout<<"Sorry, come back in "<<16-age<<" years and be sure to buy a car when you back.";}
        else if(age>=16 && has_car==false){
          cout<<"Sorry, you need to buy a car before you can drive!";}





    //----WRITE YOUR CODE ABOVE THIS LINE----
    return 0;
}
