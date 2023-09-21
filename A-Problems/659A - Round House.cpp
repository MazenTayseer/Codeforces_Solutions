#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, current_house, steps;
    cin >> n >> current_house >> steps;


    if (steps >= 0) {
        while (steps--) {
            current_house++;

            if (current_house > n) {
                current_house = 1;
            }
        }

    } else {

        steps = steps * -1;
        while (steps--) {
            current_house--;

            if (current_house == 0) {
                current_house = n;
            }
        }
    }

    cout << current_house;
}