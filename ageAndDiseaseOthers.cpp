// ageAndDiseaseOthers.cpp : 定义控制台应用程序的入口点。
//

#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a = 0, b = 0, c = 0, d = 0;
	int e, t, i;
	cin >> e;
	for (i = 0; i < e; i++)
	{
		cin >> t;
		if (t <= 18) a++;
		else if (t >= 19 && t <= 35) b++;
		else if (t >= 36 && t <= 60) c++;
		else d++;


	}
//	cout << a << b << c << d;
	cout << "1-18: " << fixed << setprecision(2) << 100*a/e<<"%" << endl;
	cout << "19-35: " << fixed << setprecision(2) << 100 * b / e << "%" << endl;
	cout << "36-60: " << fixed << setprecision(2) << 100 * c / e << "%" << endl;
	cout << "60-: " << fixed << setprecision(2) << 100 * d / e << "%" << endl;

	return 0;
}
