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
	int start = 0, end = 1;
	for (int i = 0; i< n ; ++i) {
		cout<<end << endl;
		int temp = end;
		end += start;
		start = temp;
	}
	cout << endl;
	_getch();
	return 0;
}