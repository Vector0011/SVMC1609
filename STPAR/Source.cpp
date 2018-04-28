#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <deque>

#include <conio.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	while (true) {
		int n;
		cin >> n;
		if(n == 0) {
			break;
		}
		deque<int> DQ;
		for (int i = 0; i < n; ++i) {
			int temp; cin >> temp;
			DQ.push_front(temp);
		}
		deque<int> branch;
		bool isOke = true;
		for (int i = 1; i <= n;) {
			if (DQ.empty() && !branch.empty() && branch.back() != i) {
				isOke = false;
				break;
			}
			if (!DQ.empty() && DQ.back() == i) {
				DQ.pop_back();
				i++;
				continue;
			}
			if ( !branch.empty() && branch.back() == i) {
				branch.pop_back();
				i++;
				continue;
			}
			if (!DQ.empty()) {
				branch.push_back(DQ.back());
				DQ.pop_back();
			}
			else {
				isOke = false;
				break;
			}
		}
		if (isOke) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	_getch();
	return 0;
}