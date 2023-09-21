#include <bits/stdc++.h>

typedef long long int a1;

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {

        int sum = 0;
        char arr[10][10];

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {

                if (arr[i][j] == 'X') {

                    if (i >= 4 && i <= 5 && j >= 4 && j <= 5) sum += 5;
                    else if (i >= 3 && i <= 6 && j >= 3 && j <= 6) sum += 4;
                    else if (i >= 2 && i <= 7 && j >= 2 && j <= 7) sum += 3;
                    else if (i >= 1 && i <= 8 && j >= 1 && j <= 8) sum += 2;
                    else sum += 1;

                }
            }
        }

        cout << sum << endl;

    }

}