/*
Section 8 challenge

 For this we will be using US $ and cents.

 Write a Program that asks the user to enter the following:
 An integer representing the no. of cents

 You may assume that the number of cents entered is greater than or equal to zero.

 The program should then display how to provide that change to the user.

 In the US:
 1 $ = 100 cents
 1 Quarter = 25 cents
 1 dime = 10 cents
 1 nickel = 5 cents, and
 1 penny = 1 cents

 */
  # include <iostream>
  using namespace std;

  int main(){
    int num_cent{0},dol{0},
        quar{0},dime{0},
        nick{0},penn{0},
        non_dol{0},non_quar{0},
        non_dime{0},non_nick{0};

    cout<<"Enter The total number of cents:"<<endl;
    cin>>num_cent;
    dol=num_cent/100;
    non_dol=(num_cent%100);
    quar=(non_dol)/25;
    non_quar=(non_dol%25);
    dime=(non_quar)/10;
    non_dime=(non_quar%10);
    nick=(non_dime)/5;
    non_nick=(non_dime%5);
    penn=(non_nick);

    cout<<"The entered pennies are equivalent to these many whole no. units of the following"<<endl;
    cout<<"Dollars : "<<dol<<endl;
    cout<<"Quarters : "<<quar<<endl;
    cout<<"Dimes : "<<dime<<endl;
    cout<<"Nickels : "<<nick<<endl;
    cout<<"Pennies : "<<penn<<endl;

    return 0;
  }
