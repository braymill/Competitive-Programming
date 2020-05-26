#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int T;
	long long n;
	cin >> T;
	for (int i = 1; i < T + 1; i++) {
		cin >> n;
		if (n <= 2) {
			cout << 0 << "\n";
		}
		else {
			if (n % 2 == 0) {
				cout << n / 2 - 1 << "\n";
			}
			else {
				long long a = (long long) floor(n / 2);
				cout << a << "\n";
			}
		}
		
	}
}