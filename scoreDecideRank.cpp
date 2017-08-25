// scoreDecideRank.cpp : 定义控制台应用程序的入口点。
//


#include <iostream>
using namespace std;

int main()
{
	int score;
	cin >> score;
	if (95 <= score&&score <= 100) cout << "1";
	else if (90 <= score&&score < 95) cout << "2";
	else if (85 <= score&&score < 90) cout << "3";
	else if (80 <= score&&score <85) cout << "4";
	else if (70 <= score&&score <80) cout << "5";
	else if (60 <= score&&score <70) cout << "6";
	else if (score <60) cout << "7";

    return 0;
}

