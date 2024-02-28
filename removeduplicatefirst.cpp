#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    int arr[] = {10, 20, 30, 30, 40, 40, 40, 50, 10, 60};
    int n = sizeof(arr) / 4;

    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    int newArray[s.size()]; // Create an array of size equal to the set's size

    int index = 0;
    for (auto it = s.begin(); it != s.end(); it++) {
        newArray[index] = *it; // Copy set elements to the array
        index++;
    }

    // Output the elements of the new array
    for (int i = 0; i < s.size(); i++) {
        cout << newArray[i] << " ";
    }

    return 0;
}
