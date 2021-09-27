#include <iostream>

using namespace std;

int main() {
	int arr[10];

	int n;
	for (int i = 0; i < 10; i++){
		cin >> n;
		arr[i] = n;
	}
	int rem[42] = { 0 };
	for (int i = 0; i < 10; i++) {
		rem[arr[i] % 42]++;
	}
	int count=0;
	for (int i = 0; i < 42; i++) {
		if (rem[i] >= 1) {
			count++;
		}
	}
	cout << count;
	return 0;
}