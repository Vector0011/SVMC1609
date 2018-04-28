#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>

#include <conio.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int n, k;
	cin >> n >> k;
	map<int, int> M;
	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		M[temp] ++;
		M[temp + k] ++;
	}
	int c = 0;
	for (map<int, int>::iterator it = M.begin(); it != M.end(); ++it) {
		if (it->second == 2) {
			c++;
		}
	}
	cout << c << endl;
	_getch();
	return 0;
}