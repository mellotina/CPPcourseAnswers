// longestWord.cpp : 定义控制台应用程序的入口点。
//

#include"stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char a[100];
	int count[100] = {0};
	int locationArray[100] = { -1 };
	int location=-1;
	int number = 1;
	cin.getline(a, 100);
	
		for (int j = 0; j < 100; j++) {
			if (('a'<=a[j]&&a[j]<='z')||('A'<=a[j]&&a[j]<='Z')) { count[number-1]++;  location+=1; }
			else if (a[j] == ' ') { location += 1; number += 1; locationArray[number - 1] = location; }
			else break;
		}
	
//	for (int i = 0; i < 50; i++) {
//		cout << a[i]<<"\n";
//	}
//	for (int j = 0; j < 3; j++) {
//		cout << "count:"<<count[j]<<"\n";
		
//	}
//	cout << "number" << number << "\n";
		int max = 0;
		int maxi = 0;
		for (int i = 0; i < 100; i++) {
			if (count[i] > max) { max = count[i]; maxi = i; }
		}
//		cout << count[maxi];
//		cout << maxi;
		int maxi2i = maxi;
		int m = locationArray[maxi2i] + 1;
		for (int i = 0; i < count[maxi]; i++) {
			
			cout << a[i+m];
		}
    return 0;
}

