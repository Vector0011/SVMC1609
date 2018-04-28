#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>

#include <conio.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	float n, m; cin >> n >> m;
	int c = 0;
	while (n < m) {
		c++;
		n += (n * 0.1f);
		n = (int)(n + 0.5f);
	}
	cout << c << endl;
	_getch();
	return 0;
}