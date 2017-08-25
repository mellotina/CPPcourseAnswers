// Median.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

//a function that puts the smaller number on the left, and bigger number on the right, taking the first number as standard.
void partition(int A[], int left, int right, int *pos) {
	int data = A[left];
	int i;
	for (*pos = left, i = left + 1; i <=right; i++) {
		if (A[i] < data) {
			(*pos)++;
			swap(&A[i], &A[*pos]);
		}
	}
	swap(&A[*pos], &A[left]);
}

int Getmid(int A[],int n) {
	int left = 0;
	int right = n - 1;
	int mid = (left + right) / 2;
	int pos, count = 1;
	while (1) {
		partition(A, left, right, &pos);
		if (pos == mid)
			break;
		else if (pos > mid)
			right = pos - 1;
		else
			left = pos + 1;
	}
	return (n & 0x1) != 0 ? A[mid] : (A[mid] + A[mid + 1]) / 2;
}

int main()
{
	clock_t start = clock();
	int N=1;
	int A[100];
	int midlist[100];
	int c = 0;
	while (N > 0) {
		cin >> N;
		if (N == 0) { break; }
		else {
			for (int k = 0; k < N; k++) {
				cin >> A[k];
		}
			int mid;
			mid = Getmid(A, N);
			midlist[c]=mid;
			c++;
	}
	}

	for (int p = 0; p < c; p++) {
		cout << midlist[p]<<endl;
	}
	clock_t ends = clock();
	cout << (double)(ends - start) / CLOCKS_PER_SEC << endl;
	system("pause");
    return 0;
}

