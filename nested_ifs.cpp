#include<iostream>
using namespace std;

int main(){
  int score;
  char letter_grade;
  cout<<"Please enter the Score of the Student:"<<endl;
  cin>>score;

  if (score>0  && score<100){
    if(score>90)
      letter_grade='A';
    else if(score>80)
      letter_grade='B';
    else if(score>70)
      letter_grade='C';
    else if(score>60)
      letter_grade='D';
    else
    letter_grade='F';

    cout<<"Your Grade is "<<letter_grade<<endl;
    if(letter_grade=='F')
     cout<<"Sorry, YOU MUST REPEAT!!!";
     else
     cout<<"Congratulations, You've Passed!!";
    }
    else {cout<<"Please Enter a valid Score."<<endl;}
  return 0;
}
