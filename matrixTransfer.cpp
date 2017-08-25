// matrixTransfer.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
//#include <windows.h>
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[5][5] = { 0 };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}

//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < 5; j++) {
//			cout << setw(4) << a[i][j];
//		}
//	}
	int m, n;
	int save[5] = { 0 };
	cin >> n >> m;
	if (m > 4 || m < 0 || n > 4 || n < 0) { cout << "error"<<endl;}
	else {
		for (int i = 0; i < 5; i++) {
			save[i] = a[n][i];
			a[n][i] = a[m][i];
			a[m][i] = save[i];
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << setw(4) << a[i][j];
			}
			cout << endl;
		}
	}
	
//	system("pause");
    return 0;
}

