#include <iostream>

using namespace std;

int main() {
	int n, result, ten, one;
	int cnt = 0;

	cin >> n;
	result = n;
	while (1) {
		ten = result / 10;
		one = result % 10;
		int a = ten + one;
		
		result = one * 10 + a % 10;

		cnt++;
		if (n == result) {
			break;
		}
	}
	cout << cnt << endl;
	return 0;
	
}