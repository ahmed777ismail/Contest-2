#include <iostream>
using namespace std;
int main()
{
	long long n, t, s;
	cin >> t;
	while (t--)
	{
		cin >> n >> s;
		if (n * (n + 1) / 2 >= s) {
			long long sum = 0, x = 0;
			for (size_t i = 1; i < s; i++)
			{
				if (sum < s) {
					x++; sum += i;
				}//6 21
				else
					break;
			}
			for (size_t i = x; i >= 1; i--)
			{
				if (i == sum - s)
					continue;
				else
					cout << i << ' ';
			}
			cout << endl;
		}
		else
			cout << -1 << endl;
	}

	return 0;
}

