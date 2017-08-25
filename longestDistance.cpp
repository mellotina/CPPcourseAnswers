// longestDistance.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include<iostream>
//#include<windows.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	double d;
	double a[1000][2];
	double dmax = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i][0] >> a[i][1];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				d = sqrt((a[i][0] - a[j][0])*(a[i][0] - a[j][0]) + (a[i][1] - a[j][1])*(a[i][1] - a[j][1]));
				if (d > dmax) { dmax = d; }
			}
		}
	}
	cout << fixed << setprecision(4) << dmax << endl;
//	system("pause");
	return 0;
}

