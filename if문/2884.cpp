#include <iostream>

using namespace std;

int main() {
	int h, m;

	cin >> h;
	cin >> m;

	if (0<h<24 and m >= 45) {
		cout << h << " " << m - 45 << endl;
	}
	else if (h == 0 and m < 45) {
		cout << "23" <<" "<< 15 + m<<endl;
	}
	else if (0 < h < 24 and m < 45) {
		cout << h - 1 << " " << 15 + m << endl;
	}

	
	return 0;
}