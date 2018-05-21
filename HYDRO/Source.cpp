#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>

#include <conio.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int A[12345];
		for (int i = 0; i < n; ++i) {
			cin >> A[i];
		}
		int  maxIndex = 0;
		for (int i = 1; i < n; ++i) {
			if (A[maxIndex] < A[i]) {
				maxIndex = i;
			}
		}
		int result = 0;
		int cur = 0;
		for (int i = 1; i < maxIndex; ++i) {
			if (A[cur] > A[i]) {
				result += (A[cur] - A[i]);
			}
			else {
				cur = i;
			}
		}
		cur = n-1;
		for (int i = n-1; i > maxIndex; --i) {
			if (A[cur] > A[i]) {
				result += (A[cur] - A[i]);
			}
			else {
				cur = i;
			}
		}
		cout << result << endl;
	}
	_getch();
	return 0;
}