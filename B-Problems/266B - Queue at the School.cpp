#include <bits/stdc++.h>
typedef long long int a1;
 
using namespace std;
 
 
int main() {
	int n; cin >> n;
	int t; cin >> t;
	string s; cin >> s;
 
	while (t--) {
		for (int i = 1; i < s.size(); i++) {
			if (s[i] == 'G' && s[i - 1] == 'B') {
				swap(s[i], s[i - 1]);
				i++;
			}
		}
	}
 
	cout << s;
}