#include <iostream>
using namespace std;

string reverseStr(const string &s, int i) {
    if (i == (int)s.size()) return "";
    return reverseStr(s, i + 1) + s[i];
}

int main() {
    string s = "hello";
    cout << reverseStr(s, 0) << endl;
    return 0;
}
