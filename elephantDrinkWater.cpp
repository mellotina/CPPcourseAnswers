// elephantDrinkWater.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;

int main()
{
	int n,h, r;
	double V;
	double pi = 3.14159;
	cin >> h >> r;
	V = h*(pi*r*r);
	n = (20000 / V) + 1;
	cout<<n; 
    return 0;
}

