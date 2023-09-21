#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    while (n--) {
        int a;
        cin >> a;

        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < v.size(); i++) {
        int a = v[i - 1], b = v[i], c = v[i + 1];

        if (a + b > c && a + c > b && b + c > a) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}