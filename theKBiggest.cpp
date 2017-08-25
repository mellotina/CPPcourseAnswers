// theKBiggest.cpp : 定义控制台应用程序的入口点。
//


#include <iostream>
using namespace std;

int main()
{
	int n,k;
	int a[100];
	int rank[100] = {0};
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] < a[j]) { rank[i] += 1; }
		}
	}
	for (int i = 0; i < n; i++) {
		if (rank[i] == k - 1) { cout << a[i]; }
	}
    return 0;
}

