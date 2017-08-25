// treesAlongTheRoad.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include<iostream>
//#include<windows.h>
using namespace std;

int main()
{
	int lenlist = 0;
	int L, M;
	cin >> L >> M;
	int A[100][2];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			if (j != i) {
//				cout << j<<i<<"yes"<<endl;
				if (A[i][0] <= A[j][0]&& A[j][0]<= A[i][1]) {
//					cout << "in the middle" << endl;
					A[j][0] = A[i][1];
//					lenlist -= 1;
					if (A[i][0] <= A[j][1]&& A[j][1] <= A[i][1]) {
						A[j][1] = A[i][1];
					}
					
				}
			}

		}
	}

		
	for (int i = 0; i < M; i++) {
		if (A[i][1] != A[i][0]) {
			lenlist += (A[i][1] - A[i][0] + 1);
//			cout << lenlist << endl;
		}
		else lenlist += 2;
	}

	
	int count = 0;
	for (int i = 0; i < M-1; i++) {
		for (int j = i+1; j < M; j++) {
			
			if (A[i][0] == A[j][1]) {
				lenlist -= 1;
			}
			if (A[i][0] == A[j][0]) {
				lenlist -= 1;
			}
			if (A[i][1] == A[j][0]) {
				lenlist -= 1;
			}
			if (A[i][1] == A[j][1]) {
				lenlist -= 1;
			}
				
			}
		}
	
	cout << L + 1 - lenlist << endl;
//	for (int i = 0; i < M; i++) {
//		cout << A[i][0] << " " << A[i][1] << endl;
//	}
//	system("pause");
    return 0;
}

