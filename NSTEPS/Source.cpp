#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int t; cin >> t;
	while (t--) {
		int n1, n2;
		cin >> n1 >> n2;
		if (n1 == n2 && n1 % 2 == 0) {
			cout << 2 * n1 << endl;
		}
		else if (n1 == n2 && n1 % 2 != 0) {
			cout << 2 * n1 - 1 << endl;
		}else if (n2 == n1 - 2 && n1 % 2 == 0) {
			cout << 2 * n1 - 2 << endl;
		}
		else if (n2 == n1 - 2 && n1 % 2 != 0) {
			cout << 2 * n1 - 2 - 1 << endl;
		}
		else {
			cout << "No Number" << endl;
		}
	}
	_getch();
	return 0;
}