#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j && i != n / 2 + 1 && j != n / 2 + 1) { cout << "\\"; }
			else if (i == j && i == n / 2 + 1 && j == n / 2 + 1)cout << "X";
			else if (n + 1 - j == i || n + 1 - i == j)cout << "/";
			else cout << "*";

		}

		cout << endl;



	}
	return 0;
}
