#include <iostream>

using namespace std;

int main() {
	int arr[9];

	int a, max=0, num; 

	for (int i = 0; i < 9; i++) {
		cin >> a;
		arr[i] = a;
	}

	
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			num = i + 1;
		}
	}
	
	cout << max << endl << num;
	return 0;
}