#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
bool IsSNT(int nNum) {
	if (nNum == 2) {
		return true;
	}
	if (nNum < 2 || nNum % 2 == 0) {
		return false;
	}
	for (int i = 2; i <= sqrt(nNum); ++i) {
		if (nNum % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	freopen("input.txt", "r", stdin);
	int test; cin >> test;
	for (int t = 1; t <= test; ++t) {
		int nStart, nEnd;
		cin >> nStart >> nEnd;
		for (int i = nStart; i <= nEnd; ++i) {
			if (IsSNT(i)) {
				cout << i << endl;
			}
		}
		cout << endl;
	}
	_getch();
	return 0;
}
