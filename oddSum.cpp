// oddSum.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	if (m % 2 == 0)
		m += 1;
	if (n % 2 == 0)
		n -= 1;
	int oddSum = ((n + m)*(((n - m) / 2) + 1)) / 2;
	cout <<oddSum;
    return 0;
}

