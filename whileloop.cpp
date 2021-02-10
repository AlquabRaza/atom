#include <iostream>
using namespace std;

int main(){
  // int num{};
  // cout<<"Enter a +ve Integer : "<<endl;
  // cin>>num;
  // cout<<"\n";
  //
  // while(num>0){
  // cout<<num<<"\n";
  // --num;}

  // int num{};
  // cout<<"Enter a +ve Integer to count upto : "<<endl;
  // cin>>num;
  // cout<<"\n";
  //
  // int i {1};
  //
  // while(num>=i){
  // cout<<i<<"\n";
  // ++i;}

//   int num{};
//   cout<<"Enter a +ve Integer less than 100 : "<<endl;
//   cin>>num;
//   cout<<"\n";
//
//   while(num>100){
//   cout<<"Enter the no. again :"<<"\n";
//   cin>>num;
// }

bool done {false};
int num{};
while(!done){
cout<<"Enter a +ve Integer : "<<endl;
cin>>num;
if (num<1 || num> 5)
cout<<"Out of range, Try again :\n";
else{
cout<<"thanks\n";
done=true;
 }
}

  return 0;
}
