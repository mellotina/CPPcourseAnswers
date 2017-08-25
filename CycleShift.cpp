// CycleShift.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include<iostream>
//#include<windows.h>
using namespace std;

int main()
{
	int n, m;
	
	cin >> n >> m;
	int a[100] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int cur = 1;
	int b;
	int tem = a[cur];
	for (int j = 0; j < n; j++) {
		int tgt = (cur + m) % n;
		b=a[tgt];
		a[tgt] = tem;
		tem=b;
		cur = tgt;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i]<<" ";
	}
//	system("pause");
    return 0;
}

