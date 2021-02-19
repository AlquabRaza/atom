// Section 9
// Challenge
/*
  This challenge is about using a collection (list) of integers and allowing the user
  to select options from a menu to perform operations on the list.

  Your Program should display a menu to the user as follows:

  P- Print Numbers
  A- Add a Number
  M- Display mean of the Numbers
  S- Display the smallest Number
  L- Display the largest Number
  Q- Quit

  Enter Your Choice

The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown Selection, please try again" and the menu options should be
displayed again.

If the user enters 'P' or 'p' , you should display all of the element(ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space.
For example, [ 1 2 3 4 5 ]

If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, '5 added'.
Duplicate list entries are OK

If user enters 'M' or 'm' you should calculate the mean of the elements in the list and display it.
If the list is empty you should display. "Unable to find mean- no data"

  and so on.....
*/


#include <iostream>
#include <vector>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main(){

  vector<int> v {};
  char user_inp;
  int a{}, num_items{};
  double run_sum{0}, avg_nums{0};

  // cout<<"\t\t\t\t\t\t\t\tHow many data itmes do you have : ";
  // cin>>num_items;
  //
  // for(int k=0; k<num_items ; k++){
  // int data_items;
  // cout<< "\t\t\t\t\t\t\t\tEnter data item "<<k+1<<" : ";
  // cin>>data_items;
  // v.push_back(data_items);
 // }

  do {
   cout<<"P- Print Numbers"<<endl;
   cout<<"A- Add a Number"<<endl;
   cout<<"M- Display mean of the Numbers"<<endl;
   cout<<"S- Display the smallest Number"<<endl;
   cout<<"L- Display the largest Number"<<endl;
   cout<<"Q- Quit\n"<<endl;

   cout<<"Choose from the Menu :";
   cin>>user_inp;

switch (user_inp) {
  case 'P':
  case 'p':
  {
  cout<<"Numbers are Printed below :"<<endl;

  if (v.size()!=0) {
    cout<<"["<<" ";
    for(auto num:v)
    {
    cout<<num<<" ";
    }
    cout<<"]";
  }
    else
   {
     cout<<"[] "<<"- the list is empty.\n"<<endl;
   }

  break;
  }

  case 'A':
  case 'a':
  {
  cout<<"Add a Number"<<endl;
  cout<<"Enter the Number to be added :"<<endl;
  cin>>a;
  v.push_back(a);
  cout<<a<<" - was added.\n"<<endl;;
  break;
  }

  case 'M':
  case 'm':
  {
  cout<<"Mean of the Numbers is :"<<endl;
  for(auto num:v)
  {
    run_sum += num;
  }
  if (v.size()!=0)
  {
  avg_nums = run_sum/ v.size();

   cout<<fixed<<setprecision(2);
   cout<<avg_nums<<"\n"<<endl;
  }
  else
  {
  cout<<"Unable to find Mean no data.\n"<<endl;
  }
  break;
  }

  case 'S':
  case 's':
  {
  cout<<"Display the Smallest Number"<<endl;
  // cout << "\t\t\t\t\t\t\t\t\nMax Element = "
  //        << *min_element(v.begin(), v.end());  {Not recommended}
                       // OR
if(v.size()== 0)
  cout<<"Can't Print Smallest - no Data.\n"<<endl;
else if(v.size()==1)
  cout<<a<<" is the only number.\n"<<endl;
else{
  int smallest=v.at(0);
  for(auto num:v)
    if(num<smallest)
      smallest=num;
      cout<<"The Smallest number is \n"<<smallest<<endl;
}

  break;
  }

  case 'L':
  case 'l':{
  cout<<"Display the Greatest Number"<<endl;
  // cout << "\t\t\t\t\t\t\t\t\nMin Element = "
  //        << *max_element(v.begin(), v.end());
                           //OR
                           if(v.size()== 0)
                             cout<<"Can't Print Greatest no. - no Data.\n"<<endl;
                             else if(v.size()==1)
                               cout<<a<<" is the only number.\n"<<endl;
                           else{
                             int greatest=v.at(0);
                             for(auto num:v)
                               if(num>greatest)
                                 greatest=num;
                                 cout<<"The Greatest number is \n"<<greatest<<endl;
                           }

  break;
  }

  case 'Q':
  case 'q':
  cout<<"Thanks, Good Bye!!"<<endl;
  break;

  default:
    cout<<"Sorry Invalid Input\n"<<endl;
  }
} while(user_inp!='q' && user_inp!='Q');

return 0;
}
