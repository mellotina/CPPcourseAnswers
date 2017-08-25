// numberOfCharacters.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;

int main()
{
	char s[100];
	int a=0, e=0, i=0, o=0, u=0;
	cin.getline(s, 80);
//	for (int i = 0; i < 90; i++) {
//		cout << s[i];
//	}
//	cout << "yes";
	for (int x = 0; x < 80; x++) {
		if (s[x] == 'a') a++;
		if (s[x] == 'e') e++;
		if (s[x] == 'i') i++;
		if (s[x] == 'o') o++;
		if (s[x] == 'u') u++;
	}
	cout << a << " " << e << " " << i << " " << o << " " << u << " ";
    return 0;
}

