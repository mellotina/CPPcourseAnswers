// numbersCouldBeDividedBy357.cpp : �������̨Ӧ�ó������ڵ㡣
//

//#include "stdafx.h"
#include<iostream>
//#include<windows.h>
using namespace std;

int main()
{
	int a[3];
	int r;
	while (cin >> r) {
		if (r % 3 == 0) { cout << "3" << " "; }
		if (r % 5 == 0) { cout << "5" << " "; }
		if (r % 7 == 0) { cout << "7" << " "; }
		if (r % 3 != 0 && r % 5 != 0 && r % 7 != 0) { cout << 'n'; }
		cout << endl;
	}
//	system("pause");
    return 0;
}

