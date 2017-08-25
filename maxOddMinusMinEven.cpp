// maxOddMinusMinEven.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;

int main()
{
	int a[6];
	int maxOdd=0, minEven=100;
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
		}
	for (int i = 0; i < 6; i++) {
		if (a[i] % 2 == 1) {
			if (a[i] > maxOdd) {
				maxOdd = a[i];
			}
		}
		if (a[i] % 2 == 0) {
			if (a[i] < minEven) {
				minEven = a[i];
			}
		}
	}
	int x = maxOdd - minEven;
	if (x >= 0) { cout << x; 
	}
	else { cout << -x << endl; }
    return 0;
}

