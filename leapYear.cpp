// leapYear.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include<iostream>
//#include<windows.h>
using namespace std;

int main()
{
	bool r=0;
	int a;
	cin >> a;
	if (a % 4 == 0) {
		if (a % 100 == 0 && a % 400 != 0) {
			r = 0;
		}
		else if (a % 3200 == 0) { r=0; }
		else r = 1;
	}
	if (r == 1) { cout << "Y"; }
	if (r == 0) { cout << "N"; }
//	system("pause");
    return 0;
}

