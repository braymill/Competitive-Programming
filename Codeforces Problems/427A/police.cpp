#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long;

int main() {
	long pol = 0;
	long out = 0;
	int T, cur;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> cur;
		if (cur == -1 && pol == 0) {
			out++;
		}
		else if (cur == -1 && pol > 0) {
			pol--;
		}
		else if (cur != -1) {
			pol += cur;
		}
	}
	cout << out;
}