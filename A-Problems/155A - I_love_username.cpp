//Mazen Tayseer
//Accepted
#include <iostream>
using namespace std;

int main()
{
	int n;cin >> n;
	int in;
	int smallest = INT_MAX;
	int biggest = INT_MIN;

	int count;

	bool flag = false;
	for(int i =0; i<n; i++) {
		cin >> in;


		if(in < smallest) {
			smallest = in;

			if(flag) {
				count++;
			}
			
		}

		if(in > biggest) {
			biggest = in;

			if(flag) {
				count++;
			}
		}

		flag = true;

	}

	cout << count;

}