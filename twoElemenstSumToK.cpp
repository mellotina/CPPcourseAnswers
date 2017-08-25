// twoElemenstSumToK.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;

int main()
{
	int a[1000] = { 0 };
	int n,k;
	cin >> n>>k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			bool c = (i != j);
			int sum = a[i]+a[j];
			if (c&&sum == k) { cout << "yes"; goto here; }

		}
	}
	cout << "no";
	here:
	return 0;
}

