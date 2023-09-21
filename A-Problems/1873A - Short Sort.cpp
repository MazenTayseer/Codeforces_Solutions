#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        string v;
        cin >> v;

        if (v[0] == 'a' && v[1] == 'b' && v[2] == 'c') {
            cout << "YES" << endl;
            continue;
        }

        bool check = false;
        for (int i = 0; i < v.size() - 1; i++) {
            for (int j = i + 1; j < v.size(); j++) {
                swap(v[i], v[j]);

                if (v[0] == 'a' && v[1] == 'b' && v[2] == 'c') {
                    check = true;
                    break;
                }
                swap(v[i], v[j]);
            }

            if (check) {
                break;
            }
        }

        if (check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


}