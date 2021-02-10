// Section 9
// Range based For loop

#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){

  // int scores [] {10,20,30};
  //
  //     for(auto score:scores)
  //     cout<<score<<endl;

// vector<double> temperatures {88.9,78.6,44.7,77.8,99.67};
// double avg_temp{0};
// double run_sum{0};
//     for(auto temp:temperatures)
//     // cout<<temp<<endl;
//     run_sum += temp;
//
//     if (temperatures.size())
//     avg_temp = run_sum/ temperatures.size();
//
//      cout<<fixed<<setprecision(2);
//      cout<<avg_temp<<endl;

     // for (auto val:{1,2,3,45,36})
     //     cout<<val<<endl;

     for (char c:"ALQUAB RAZA")
         if(c == ' ')
         cout<<"\t";
         else
         cout<<c<<endl;



     return 0;
}
