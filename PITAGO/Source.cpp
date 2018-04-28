#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

#include <conio.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int n; cin >> n;
	int c = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = i+1; j <= n; ++j) {
			for (int z = j + 1; z <= n; ++z) {
				int sum = i * i + j * j;
				if (sum == z*z) {
					c++;
				}
			}
		}
	}
	cout << c << endl;
	_getch();
	return 0;
}