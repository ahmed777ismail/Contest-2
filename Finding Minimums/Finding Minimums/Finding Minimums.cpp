#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, r, minn = pow(10, 9), counter = 0;
	cin >> n >> r;
	for (int i = 1; i <= n; i++) {
		int val;
		cin >> val;
		minn = min(minn, val);
		counter++;
		if (counter == r || i == n) {
			cout << minn << " ";
			counter = 0;
			minn = pow(10, 9);
		}
	}
}

