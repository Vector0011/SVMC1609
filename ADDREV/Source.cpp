#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int test; cin >> test;
	for (int t = 1; t <= test; ++t) {
		string n1, n2;
		cin >> n1 >> n2;
		string n3 = "";
		int ma = max(n1.length(), n2.length());
		ma += 3;
		int thieun1 = ma - n1.length();
		int thieun2 = ma - n2.length();
		for (int i = 0; i < thieun1; ++i) {
			n1.push_back('0');
		}
		for (int i = 0; i < thieun2; ++i) {
			n2.push_back('0');
		}
		int du = 0;
		int l = n1.length();
		for (int i = 0; i < l; ++i) {
			int temp = n1[i] + n2[i] - (48*2) + du;
			if (temp >= 10) {
				du = 1;
				temp %= 10;
				n3.push_back(temp + 48);
			}
			else {
				n3.push_back(temp + 48);
				du = 0;
			}
		}
		for (int i = n3.length() - 1; i >= 0; --i) {
			if (n3[i] == '0') {
				n3.pop_back();
			}
			else {
				break;
			}
		}
		for (int i = 0; i < n3.length() / 2; ++i) {
			swap(n3[i], n3[n3.length() - 1 - i]);
		}
		
		
		int result = 0;
		for (int i = n3.length() - 1; i >= 0; --i) {
			result *= 10;
			result += (n3[i] - 48);
		}
		cout << result << endl;
	}
	_getch();
	return 0;
}