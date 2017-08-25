// stringComparison.cpp : 定义控制台应用程序的入口点。
//


#include <iostream>
using namespace std;

int main()
{
	char s1[100];
	char s2[100];
	cin.getline(s1, 80);
	cin.getline(s2, 80);
	for (int i = 0; i < 81; i++) {
		if (s1[i] >= 'A'&&s1[i] <= 'Z') {
			s1[i] += 32;
		}
	}
	for (int i = 0; i < 81; i++) {
		if (s2[i] >= 'A'&&s2[i] <= 'Z') {
			s2[i] += 32;
		}
	}
	int i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i])) {
		i++;
	}
	if (s1[i] > s2[i]) {
		cout << ">";
	}
	else if (s1[i] < s2[i]) {
		cout << "<";
	}
	else { cout << "="; }
    return 0;
}

