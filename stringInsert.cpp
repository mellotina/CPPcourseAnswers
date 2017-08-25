// stringInsert.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include<iostream>

#include<cstring>



using namespace std;



int main()
{
	char str[100];
	char str2[4];
	char save[100];
	while (cin >> str >> str2) {
		
		
//		cout << "strinput:"<<str<<","<< str2<<endl;
		
		char max = ' ';
		int maxi;
		for (int i = 0; i < strlen(str); i++) { 
			if (str[i] > max) {
				max = str[i];
				maxi = i;
			}
			
		}
		for (int i = maxi+1; i < 100-maxi-1; i++) {
			save[i] = str[i];
			str[i] = str2[i - maxi-1];
		}
		for (int i = maxi + 1 + 3; i < maxi + 1 + 3 + (100 - maxi - 1); i++) {
			str[i] = save[i-3];
		}
		cout << str << endl;

	}
    return 0;
}

