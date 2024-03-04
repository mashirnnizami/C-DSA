#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout<<"Elements of the vector:"<<endl;
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout<<numbers[i]<<",";
    }
   cout<<endl;
   cout<<"After modify we get :";
    
    numbers[1]=28;
    
      cout<<"Elements of the vector:"<<endl;
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout<<numbers[i]<<",";

    }
       cout<<endl;
   cout<<"After pop we get :";
    
    numbers.pop_back();
      cout<<"Elements of the vector:"<<endl;
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout<<numbers[i]<<",";

    }
 return 0 ;
}