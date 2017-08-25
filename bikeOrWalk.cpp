// bikeOrWalk.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	int a[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		float distance;
		cin >> distance;
		float bike = 50 + distance / 3.00;
		float walk = distance / 1.20;
		if (bike > walk) { a[i] = 0; }
		else if (walk > bike) { a[i] = 1; }
		else a[i]=2;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) { cout << "Walk" << "\n"; }
		else if (a[i] == 1) { cout << "Bike" << "\n"; }
		else cout << "All"<<"\n";
	}
	
	return 0;
}

