#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n < 10) return 1;
    return 1 + countDigits(n / 10);
}

int main() {
    cout << countDigits(12345) << endl;
    return 0;
}
