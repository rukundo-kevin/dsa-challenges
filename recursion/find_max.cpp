#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    int mx = findMax(arr, n - 1);
    return (arr[n - 1] > mx) ? arr[n - 1] : mx;
}

int main() {
    int arr[] = {1,5,3,9,2};
    cout << findMax(arr, 5) << endl;
    return 0;
}
