#include <bits/stdc++.h>

#include <cctype>
#include <string>
using namespace std;

char c;
int a;
bool b;

int main() {
    string s;
    getline(cin, s);
    c = 96;
    b = false;
    a = 0;
    for (int i = 0; i < s.length(); i++) {
        if (!('0' <= s[i] && s[i] <= '9') && !('a' <= s[i] && s[i] <= 'z')) {
            printf("No");
            return 0;
        }
        if (s[i] - '0' < a&&('0' <= s[i] && s[i] <= '9')) {
            if (b) {
                printf("No");
                return 0;
            }
        } else {
            a = s[i] - '0';
        }
        if (s[i] > c&& ('a' <= s[i] && s[i] <= 'z')) {
            printf("No");
            return 0;
        } else {
            c = s[i];
            b = true;
        }
    }
    printf("Yes");
    return 0;
}