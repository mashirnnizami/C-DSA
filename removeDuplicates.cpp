#include <bits/stdc++.h>

std::vector<int> removeDuplicates(const std::vector<int> &arr) {
    std::unordered_set<int> seen;
    std::vector<int> result;

    for (int num : arr) {
        if (seen.find(num) == seen.end()) { // If the number is not seen before
            seen.insert(num);
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 2, 3, 5, 6, 7, 8, 1};
    std::vector<int> result = removeDuplicates(arr);

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Array with duplicates removed: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
