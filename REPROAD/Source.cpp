#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vector>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		vector<int> VK;
		VK.push_back(0);
		for (int i = 0; i < n; ++i) {
			int temp; cin >> temp;
			if (temp == 0) {
				VK.push_back(i+1);
			}
		}
		VK.push_back(n+1);
		int ma = 0;
		for (int i = 1; i < VK.size() - 1; ++i) {
			if (i + k >= VK.size()) {
				break;
			}
			int temp = VK[i + k] - VK[i - 1];
			if (ma < temp) {
				ma = temp;
			}
		}
		cout << ma - 1 << endl;
	}
	_getch();
	return 0;
}