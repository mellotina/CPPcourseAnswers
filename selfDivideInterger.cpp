// selfDivideInterger.cpp : 定义控制台应用程序的入口点。
//


#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 10; i <= n; i++) {
		int a = i/ 10; 
		int b = i - 10 * a; 

		if (i%(a + b)== 0) { cout << i<<"\n"; }
	}
	return 0;
}

