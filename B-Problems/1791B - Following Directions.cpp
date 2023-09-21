#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int l, xPos = 0, yPos = 0;
        bool flag = false;
        cin >> l;

        char dirs[51];
        for (int i = 0; i < l; i++) {
            cin >> dirs[i];
        }

        for (int i = 0; i < l; i++) {
            if (dirs[i] == 'U') {
                yPos++;
            } else if (dirs[i] == 'D') {
                yPos--;
            } else if (dirs[i] == 'R') {
                xPos++;
            } else if (dirs[i] == 'L') {
                xPos--;
            }

            if (xPos == 1 && yPos == 1) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}

