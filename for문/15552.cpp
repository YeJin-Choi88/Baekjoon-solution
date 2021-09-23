#include <iostream>

using namespace std;

int main() {
	int n, result;
	ios_base::sync_with_stdio(false);
	result = 0;
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b<<"\n";
	}
	
}