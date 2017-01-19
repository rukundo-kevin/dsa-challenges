#include <iostream>
using namespace std;

bool isPal(const string &s, int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return isPal(s, l + 1, r - 1);
}

int main() {
    string s = "racecar";
    cout << (isPal(s, 0, s.size() - 1) ? "true" : "false") << endl;
    return 0;
}
