#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	double* arr = new double[n];
	double a, max,new_score;
	for (int i = 0; i < n;i++) {
		cin >> a;
		arr[i] = a;
	}
	max = arr[0];

	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	for (int i = 0; i < n; i++) {
		new_score = arr[i] / max * 100.00;
		arr[i] = new_score;
	}

	double sum=0;

	for (int i = 0; i < n;i++) {
		sum += arr[i];
	}
	
	cout << sum / n;

	return 0;
}