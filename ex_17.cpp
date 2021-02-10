#include <iostream>
#include <vector>
using namespace std;

int main() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result;
    int num_items;
    vector <int> vec;

    cout<<"How many data itmes do you have :"<<endl;
    cin>>num_items;

    for(int k{1}; k<=num_items; ++k){
    int data_items;
    cout<< "Enter data item "<<k<<" : ";
    cin>>data_items;
    vec.push_back(data_items);
   }

    for(unsigned int i{0}; i<vec.size();++i){
       for(unsigned int j=i+1; j<vec.size();++j)
           result = result + vec.at(i)*vec.at(j);


    }
    cout<<result;
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return 0;
}
