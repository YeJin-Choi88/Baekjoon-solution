#include <iostream>

using namespace std;

int main() {
	int a;

	cin >> a;
	

	if (a >= 90 and a <=100) {
		cout << "A" << endl;
	}
	else if (a>=80 and a<=89) {
		cout << "B" << endl;
	}
	else if (a >= 70 and a <= 79) {
		cout << "C" << endl;
	}
	else if (a >= 60 and a <= 69) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}
}