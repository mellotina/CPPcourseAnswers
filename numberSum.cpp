// numberSum.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include <iostream>
using namespace std;

int main()
{
	int a,x,sumX=0;
	cin >> a;
	for (int i = 0; i < 5; i++) {
		cin >> x;
		if (x < a)
			sumX += x;
	}
	cout << sumX;
    return 0;
}

