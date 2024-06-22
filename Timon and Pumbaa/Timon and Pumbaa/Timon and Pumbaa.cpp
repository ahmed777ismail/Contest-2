#include <iostream>
using namespace std;


int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	int res = num1 - num2;
	if (res >= 0)
	{
		cout << res << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}

