// purchaseAppartment.cpp : 定义控制台应用程序的入口点。
//


#include <iostream>
using namespace std;

int main()
{
	float N, K;
	while (cin >> N >> K) {
		float price = 200;
		float earning = 0;
		for (int i = 0; i < 20; i++) {

			//		cout << price << "-";
			earning += N;
			//		cout << earning << "-";
			if (earning >= price)
			{
				cout << i + 1 << "\n";
				goto here;
			}
			else
				price = price*(1 + K / 100);

		}
	here:
		if (price > earning) { cout << "Impossible" << "\n"; }
	}
    return 0;
}

