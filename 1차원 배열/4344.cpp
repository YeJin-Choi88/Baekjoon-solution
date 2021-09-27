#include <iostream>
#include <cstring>

using namespace std;

//넘어렵다 뭔소린지 모르겠다
int main() {
	int Case, n;
	cin >> Case;
	double sum=0;
	double *nums = new double[Case];
	for (int i = 0; i < Case;i++) {
		cin >> n;
		double* arr = new double[n];
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
			sum += arr[j];
		}
		nums[i] = sum/n;
		sum = 0;
	}
	for (int i = 0; i < Case;i++) {
		printf("%.3lf\n", nums[i]);
	}
	return 0;

}