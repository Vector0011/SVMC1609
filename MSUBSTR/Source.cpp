#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <string>
#include <map>

#include <conio.h>

using namespace std;
int R[123456];
string s1, s2;
void Init() {
	int k = -1;
	R[0] = -1;
	for (int i = 1; i < s1.length(); ++i) {
		if (k > -1 && s1[k + 1] != s1[i]) {
			k = R[k];
		}
		if (s1[k + 1] = s1[i]) {
			k++;
		}
		R[k] = k;
	}
}
int KMP() {
	Init();
	int k = -1;
	int sum = 0;
	for (int i = 0; i < s2.length(); ++i) {
		if (k > -1 && s1[k + 1] != s2[i]) {
			k = R[k];
		}
		if (s1[k + 1] == s2[i]) {
			k++;
		}
		if (k == s1.length() - 1) {
			sum++;
		}
	}
	return sum;
}
int main() {
	freopen("input.txt", "r", stdin);
	int t; cin >> t;
	while (t--) {
		string str;
		cin >> str;
		int max = 0;
		map<int,int> M;
		for (int i = 0; i < str.length(); i++) {
			for (int j = 0; ; ++j) {
				int first = i - j;
				int second = i + j;
				if (first < 0 || second >= str.length() || str[first] != str[second]) {
					break;
				}
				M[2 * j + 1] ++;
				if (max < 2*j+1) {
					max = 2 * j + 1;
				}
			}
		}
		for (int i = 0; i < str.length(); ++i) {
			int i2 = i + 1;
			for (int j = 0; ; ++j) {
				int first = i - j;
				int second = i2 + j;
				if (first < 0 || second >= str.length() || str[first] != str[second]) {
					break;
				}
				M[2 * j + 2] ++;
				if (max < 2 * j + 2) {
					max = 2 * j + 2;
				}
			}
		}
		cout << max <<" " <<M[max]<< endl;
	}
	_getch();
	return 0;
}