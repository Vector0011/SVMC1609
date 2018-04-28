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
	unsigned long long sum = 0;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			sum += i;
			sum += (n / i);
		}
	}
	sum++;
	cout << sum << endl;
	if (n < sum) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
	_getch();
	return 0;
}