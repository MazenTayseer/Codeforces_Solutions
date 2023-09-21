#include <bits/stdc++.h>

typedef long long int a1;

using namespace std;


int main() {
    a1 t;
    cin >> t;

    while (t--) {
        a1 n;
        cin >> n;

        a1 arr[n];
        for (a1 i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        arr[0] += 1;

        a1 product = 1;
        for (a1 i = 0; i < n; i++) {
            product *= arr[i];
        }

        cout << product << endl;
    }

}