#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>

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
	int sa = 0, sb = 0, sc1 = 0, sc2 = 0, sd1 = 0, sd2 = 0;
	for (int i = 0; i < n; ++i) {
		sa += A[i][i];
		sb += A[n - i - 1][i];
	}
	for (int i = 0; i < n - 1 ; ++i) {
		sc1 += A[i][i + 1];
		sd1 += A[n - i - 1][i + 1];
	}
	for (int i = 1; i < n; ++i) {
		sc2 += A[i][i - 1];
		sd2 += A[n - i - 1][i - 1];
	}
	cout << sa << endl;
	cout << sb << endl;
	cout << sc1 << " " << sc2 << endl;
	cout << sd2 << " " << sd1 << endl;
	_getch();
	return 0;
}