// AbnormalCell.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include<iostream>
//#include<windows.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	const int x = n;
	int a[100][100] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int c = 0;
	for (int i=1; i < n - 1; i++) {
		for (int j=1; j < n - 1; j++) {
			if (a[i - 1][j - 1] - a[i][j] >= 50 || a[i + 1][j - 1] - a[i][j] >= 50 || a[i - 1][j + 1] - a[i][j] >= 50 || a[i + 1][j + 1] - a[i][j] >= 50) {
				c++;
			}
		}
	}
	cout << c;
//	system("pause");
    return 0;
}

