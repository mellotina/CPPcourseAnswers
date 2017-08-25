// numberOfInterger.cpp : 定义控制台应用程序的入口点。
//


#include <iostream>
using namespace std;
int main()
{
	int n,x, n1=0, n2=0, n3=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 1) { n1 += 1; }
		if (x == 5) { n2 += 1; }
		if (x == 10) { n3 += 1; }
	}
	cout << n1 << endl;
	cout << n2 << endl;
	cout << n3 << endl;
    return 0;
}

