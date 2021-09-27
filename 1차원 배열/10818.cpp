#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;
	int * arr = new int[n];
	
	int a, min=0, max=0;

	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[i] = a;
	}

	min = arr[0];
	max = arr[0];

	for (int i = 0; i < n; i++) {
		if (min > arr[i]){
			min = arr[i];
			}
	}
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << min << " " << max;
	return 0;

}