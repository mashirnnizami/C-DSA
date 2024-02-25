#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

cout<<endl;
cout<<"Enter the element to be searched: ";
int t;
cin>>t;
cout<<endl;
for(int i = 0; i < n; i++) {
        if(arr[i] == t) {
            cout << "The element is present at location: " << i << endl;
            
            return 0;
        }
    }
}