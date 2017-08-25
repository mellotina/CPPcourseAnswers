// treesAlongTheRoadNew.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
//#include<windows.h>
#include<iostream>
using namespace std;

int main()
{
	int L, M,a[100][2];
	int b[10001] = { 0 };
	cin >> L >> M;
	for (int i = 0; i < M; i++) {
		cin >> a[i][0] >> a[i][1];
	}
	for (int i = 0; i < L + 1; i++) {
		b[i] = 1;
	}
	for (int i = 0; i < M; i++) {
		for (int j = a[i][0]; j < a[i][1] + 1; j++) {
			b[j] = 0;
		}

	}
	int count = 0;
	for (int i = 0; i < 10002; i++) {
		if (b[i] == 1) { count++; }
	}
	cout << count;
//	system("pause");
    return 0;
}

