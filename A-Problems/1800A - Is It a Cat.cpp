#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int z;
        cin >> z;

        string s;
        cin >> s;


        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }

        s.erase(unique(s.begin(), s.end()), s.end());

        cout << (s == "meow" ? "YES" : "NO") << endl;
    }
}