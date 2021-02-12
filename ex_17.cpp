#include <iostream>
#include <vector>
using namespace std;

int main() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result=0;
    int num_items;
    vector <int> vec;

    cout<<"How many data itmes do you have :"<<endl;
    cin>>num_items;

    for(int k=0; k<num_items ; k++){
    int data_items;
    cout<< "Enter data item "<<k+1<<" : ";
    cin>>data_items;
    vec.push_back(data_items);
   }

  // {1,2,3,4} = 1*2 + 2*3 + 3*4 + 4*1

    for(unsigned int i{0} ; i<vec.size() ; i++)
    {
       // for(unsigned int j=i+1; j<vec.size();j++)
           if(i==vec.size()-1)
           {
            result += vec.at(i) * vec.at(0);
            break;
           }
           result = result + vec.at(i)*vec.at(i+1);


    }

    cout<<result;
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return 0;
}
