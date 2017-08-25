// seperateInterger.cpp : 定义控制台应用程序的入口点。
//


#include <iostream>
using namespace std;

int main()
{
	int n,a,b,c;
	cin >> n;
	a = n / 100;
	b = (n - 100 * a) / 10;
	c = (n - 100 * a - 10 * b);
	cout << a <<"\n"<< b <<"\n"<< c;
    return 0;
}

