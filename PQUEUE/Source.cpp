#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <deque>

#include <conio.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int test; cin >> test;
	while (test--) {
		int n, m; cin >> n >> m;
		deque<pair<int,int>> DQ;
		for(int i = 0; i< n; ++i){
			int temp; cin >> temp;
			if (i == m) {
				DQ.push_back(make_pair(temp,1));
			}
			else {
				DQ.push_back(make_pair(temp, 0));
			}
		}
		int result = 0;
		while (true) {
			int m = 0;
			int vitri = 0;
			for (int i = 0; i < DQ.size(); ++i) {
				if (DQ[i].first > m) {
					m = DQ[i].first;
					vitri = i;
				}
			}
			for (int i = 0; i < vitri; ++i) {
				DQ.push_back(DQ.front());
				DQ.pop_front();
			}
			result++;
			if (DQ.front().second == 1) {
				break;
			}
			else {
				DQ.pop_front();
			}
		}
		cout << result << endl;
	}
	_getch();
	return 0;
}