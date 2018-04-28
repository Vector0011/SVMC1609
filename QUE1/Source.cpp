#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <conio.h>
#include <vector>
#include <list>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		vector<pair<int,int>>V;
		for (int i = 0; i < n; ++i) {
			int temp; cin >> temp;
			V.push_back(make_pair(temp,0));
		}
		for (int i = 0; i < n; ++i) {
			int temp; cin >> temp;
			V[i].second = temp;
		}
		for (int i = 0; i < n - 1; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (V[i].first < V[j].first) {
					swap(V[i], V[j]);
				}
			}
		}
		vector<int> L;
		L.push_back(V[0].first);
		for (int i = 1; i < n; ++i) {
			int count = 0;
			for (int j = 0; j < L.size(); ++j) {
				if (V[i].second == 0) {
					L.insert(L.begin(), V[i].first);
					break;
				}
				if (L[j] > V[i].first) {
					count++;
				}
				if (count == V[i].second) {
					L.insert(L.begin() + j + 1, V[i].first);
					break;
				}
			}
		}
		for (int i = 0; i < L.size(); ++i) {
			cout << L[i] << " ";
		}
		cout << endl;
	}
	_getch();
	return 0;
}