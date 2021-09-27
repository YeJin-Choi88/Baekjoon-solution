#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int n;
	cin >> n;
	char arr[80];

	

	for (int i = 0; i < n;i++) {
		cin >> arr;

		int score = 0, count = 0;
		
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				count+=1;
				score += count;
			}
			if (arr[j] == 'X') {
				count = 0;
			}
		}
		cout << score << endl;
		
	}
	
	return 0;
}