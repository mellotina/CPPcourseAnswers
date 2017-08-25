// simpleCalculator.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include<iostream>
//#include<windows.h>
//#include<stdio.h>
using namespace std;
int main()
{
	int a, b;
	char c;
	while (cin >> a >> b >> c) {
		 
		
		
		
//		putchar(c);
//		cout << "yea";
		switch (c) {
		case '+': cout << a + b << endl; break;
		case '-': cout << a - b << endl; break;
		case '*': cout << a*b << endl; break;
		case '/': if (b == 0) { cout << "Divided by zero!" << endl; }
				  else cout << a / b << endl; 
				  break;
		default: cout << "Invalid operator!" << endl; 
		}
	}
	
//	system("pause");
    return 0;
}

