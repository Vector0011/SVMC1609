#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>

#include <conio.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int n; cin >> n;
	int A[123][123];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> A[i][j];
		}
	}
	int tc = 0, dc = 0, tp = 0, dp = 0;
	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			tc += A[i][j];
			dp += A[n - i - 1][j];
		}
	}
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < i; ++j) {
			dc += A[i][j];
			tp += A[n - i - 1][j];
		}
	}
	cout << tc << endl;
	cout << dc << endl;
	cout << tp << endl;
	cout << dp << endl;

	_getch();
	return 0;
}