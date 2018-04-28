#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>

#include <conio.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int n; cin >> n;
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	//cout << sum << endl;
	if (sum % 10 == 9) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	_getch();
	return 0;
}