#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

#include <conio.h>

using namespace std;
int A[1234567];
int main() {
	freopen("input.txt", "r", stdin);
	
	for (int i = 2; i < 1234567; ++i) {
		if (A[i] == 0) {
			for (int j = 2; ; ++j) {
				if (i * j > 1234567) {
					break;
				}
				A[i*j] = 1;
			}
		}
	}
	for (int i = 99; i <= 99; ++i) {
		int sum = 0;
		for (int j = 2; j <= sqrt(i); ++j) {
			if (i % j == 0) {
				if (j == i / j) {
					sum += j;
				}
				else {
					sum += j;
					sum += (i / j);
				}
			}
		}
		sum++;
		sum += i;
	}

	cout << 'a'<< endl;
	_getch();
	return 0;
}