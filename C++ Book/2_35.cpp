/*
Write a Program that promts the user to enter three numbers
and then prints them vertically ( in one line each)
and then reversed ( the last one first )
*/

# include <iostream>
using namespace std;

int main(){
  int a, b , c ;
  cout << " Please enter three numbers separed by space : "<<endl;
  cin>>a>>b>>c;

  cout<< "Your numbers Forward :"<< endl;
  cout<<a<< endl;
  cout<<b<< endl;
  cout<<c<< endl;

  cout<< "Your numbers Reversed :"<< endl;
  cout<<c<< endl;
  cout<<b<< endl;
  cout<<a<< endl;

  return 0;
}
