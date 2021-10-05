#include <iostream>

using namespace std;

int cnt = 0;

int han(int x) {
	if (x < 100) {
		cnt++;
	}
	else if (x >= 100 && x < 1000) {
		if ((x / 100) + (x % 10) == 2 * ((x % 100) / 10)) {
			cnt++;
		}
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		han(i + 1);
	}
	cout << cnt << endl;
}