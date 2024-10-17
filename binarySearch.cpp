#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // Target not found
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 3;
    int result = binarySearch(arr, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}
