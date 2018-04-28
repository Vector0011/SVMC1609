#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>

#include <conio.h>

using namespace std;
int A[123456];
int main() {
	freopen("input.txt", "r", stdin);
	for (int i = 2; i < 123456; i++) {
		if (A[i] == 0) {
			for (int j = 2; ; ++j) {
				if (i* j > 123456) {
					break;
				}
				else {
					A[i*j] = 1;
				}
			}
		}
	}
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		for (int i = n; i >= 0; --i) {
			if (A[i] == 0) {
				cout << i << endl;
				break;
			}
		}
	}
	_getch();
	return 0;
}