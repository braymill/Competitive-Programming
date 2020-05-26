#include <iostream>
#include <algorithm>
#define ll long long;
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int out = 0;
	int day = 1;
	while (n > 0) {
		n--;
		if (day % m == 0) {
			n++;
		}
		day++;
		out++;
	}
	cout << out;
}