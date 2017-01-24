#include <iostream>
using namespace std;

void permute(string &s, int l) {
    if (l == (int)s.size() - 1) {
        cout << s << endl;
        return;
    }

    for (int i = l; i < (int)s.size(); i++) {
        swap(s[l], s[i]);
        permute(s, l + 1);
        swap(s[l], s[i]);
    }
}

int main() {
    string s = "abc";
    permute(s, 0);
    return 0;
}
