#include <iostream>
#include <math.h>
using namespace std;


int main() {


    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        long long num1, num2; cin >> num1 >> num2;
        long long maxNum = max(num1, num2);
        long long minNum = min(num1, num2);
        long long sum = (((maxNum * (maxNum + 1)) / 2) - ((minNum * (minNum + 1)) / 2)) + minNum;

        cout << sum << endl;

    }


    return 0;
}