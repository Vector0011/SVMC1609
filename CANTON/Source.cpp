#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <conio.h>

using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	int test; cin >> test;
	vector<int> V;
	int sum = 0;
	while (sum < 1e3) {
		static int c = 1;
		sum += c;
		c++;
		V.push_back(sum);
	}
	while (test--) {
		int t; cin >> t;
		int index;
		int s;
		if (t == 1) {
			cout << "TERM 1 IS 1/1" << endl;
			continue;
		}
		for (int i = 0; i < V.size(); ++i) {
			if (V[i] >= t) {
				index = i + 1;
				s = t - V[i - 1];
				break;
			}
		}
		int first, second;
		if (index % 2 == 0) {
			// đi xuống.
			second = index - s + 1;
			first = s;
		}
		else {
			first = index - s + 1;
			second = s;
		}
		
		cout << "TERM " <<t<< " IS " << first<<"/"<<second << endl;
	}
	_getch();
	return 0;
}