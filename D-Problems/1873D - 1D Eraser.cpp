#include <bits/stdc++.h>
typedef long long int a1;
using namespace std;

int main() {
    a1 t;
    cin >> t;

    while (t--) {
        a1 n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        a1 steps = 0;

        for (a1 i = 0; i < n; i++) {
            if (s[i] == 'B') {
                steps++;
                i += k-1;
            }
        }

        cout << steps << endl;
    }
}
