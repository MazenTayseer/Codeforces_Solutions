#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, m;
    cin >> n;
    cin >> m;

    double max_n = -1, in;
    int sol = 0;

    for (int i = 0; i < n; i++) {
        cin >> in;
        double l = ceil(in / m);

        if (l >= max_n) {
            max_n = l;
            sol = i;
        }
    }

    cout << sol + 1;
}