#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int target) {
    if (l > r) return -1;
    int m = l + (r - l) / 2;
    if (arr[m] == target) return m;
    if (arr[m] > target) return binarySearch(arr, l, m - 1, target);
    return binarySearch(arr, m + 1, r, target);
}

int main() {
    int arr[] = {1,2,3,4,5};
    cout << binarySearch(arr, 0, 4, 4) << endl;
    return 0;
}
