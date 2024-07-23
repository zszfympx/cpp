#include <bits/stdc++.h>
using namespace std;
int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    string a = str1;
    string b = str2;
    a.erase(remove(a.begin(), a.end(), ' '), a.end());
    b.erase(remove(b.begin(), b.end(), ' '), b.end());
    if (a == b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}