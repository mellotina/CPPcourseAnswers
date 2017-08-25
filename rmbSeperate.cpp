// rmbSeperate.cpp : 定义控制台应用程序的入口点。
//


#include <iostream>
using namespace std;

int main()
{
	int money;
	cin >> money;
	int a = money / 100;
	cout << a<<"\n";
	int b = (money - 100 * a) / 50;
	cout << b << "\n";
	int c = (money - 100 * a - 50 * b) / 20;
	cout << c << "\n";
	int d = (money - 100 * a - 50 * b - 20 * c) / 10;
	cout << d << "\n";
	int e = (money - 100 * a - 50 * b - 20 * c - 10 * d) / 5;
	cout << e << "\n";
	int f = money - 100 * a - 50 * b - 20 * c - 10 * d - 5 * e;
	cout << f;

    return 0;
}

