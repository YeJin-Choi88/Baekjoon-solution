#include <iostream>
#define N 10000
using namespace std;

int d(int n) {
	int y=0;
	if (n < 10) {
		y = n + n;
	}
	else if (n >= 10 && n < 100) {
		y = n + n / 10 + n % 10;
	}
	else if (n >= 100 && n < 1000) {
		y = n + n / 100 + (n % 100) / 10 + n % 10;
	}
	else if (n >= 1000 && n < N) {
		y = n + n/1000+(n%1000) / 100 + (n % 100) / 10 + n % 10;
	}
	else if (n == N) {
		y = 10001;
	}
	return y;
}

int a[N+1] = {};
int main() {
	int x,z;
	
	for (int i = 0;i < N; i++) {
		a[i] = i + 1;
	}
	
	for (int i = 0; i < N; i++) {
		x = i + 1;
		z = d(x);
		a[z - 1] = 1;
		
	}

	for (int i = 0; i < N; i++) {
		if (a[i] != 1) {
			cout << a[i] << endl;
		}
		else if (i == 0) {
			cout << a[i] << endl;
		}
	}

	return 0;
}