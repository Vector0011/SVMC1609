#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int test; cin >> test;
	while (test--) {
		int n, x, y;
		cin >> n >> x >> y;
		vector<int> V;
		int ma = x;
		while (ma < n) {
			V.push_back(ma);
			ma += x;
		}
		for (int i = 0; i < V.size(); ++i) {
			if (V[i] % y != 0) {
				cout << V[i] << " ";
			}
		}
		cout << endl;
	}
	_getch();
	return 0;
}
