// highestScore.cpp : 定义控制台应用程序的入口点。
//


#include <iostream>
#include<algorithm> 
using namespace std;

int main()
{
	int n, max=0;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	cout << max << endl;
    return 0;
}

