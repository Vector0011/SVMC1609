#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>

#include <conio.h>

using namespace std;
int A[123456];
int main() {
	freopen("input.txt", "r", stdin);
	int n; cin >> n;
	
	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}
	sort(A, A + n);
	for (int i = 0; i < n; ++i) {
		cout << A[i] << endl;
	}
	_getch();
	return 0;
}