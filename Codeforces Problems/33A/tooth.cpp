#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int a[1005];
	bool foundk = false;
	for (int i = 0; i < n; i++) {
		int r, c;
		cin >> r >> c;
		if (c < a[r - 1]) {
			a[r - 1] = c;
		}
		if (c == k) {
			foundk = true;
		}
	}
	int out = 0;
	unordered_set<int> vals;
	for (int i = 0; i < n; i++) {
		vals.insert(a[i]);
	}
	for (auto elem : vals) {
		out += elem;
	}
	if (foundk) {
		cout << k;
	}
	else {
		cout << out;
	}
}