// bugEatApple.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include <iostream>
using namespace std;

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	int left = n - y / x;
	if (left >= 1) {
		if (y%x == 0) {
			cout << left;
		}
		else { cout << left - 1; }
	}
	else { cout<<0; }
    return 0;
}

