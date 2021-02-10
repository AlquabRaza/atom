#include<iostream>
using namespace std;

int main(){
  const int driv_agr{16};
  int age{};
  cout<<"Enter the age of the Candidate :"<<endl;
  cin>>age;
  if(age>=16 && age<55){
    cout<<"/n============ if Statement 1============"<<endl;
    cout<<"Yes-you can drive."<<endl;
  }
  if (age<16){
    cout<<"/n============ if Statement 2============"<<endl;
    cout<<"NOO-you're too young to drive, Study First"<<endl;
  }
  if (age>=55){
    cout<<"/n============ if Statement 3============"<<endl;
    cout<<"NOO-you're too Old to drive, Take Rest"<<endl;
  }
  return 0;
}
