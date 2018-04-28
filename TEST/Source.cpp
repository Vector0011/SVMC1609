#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

#include <conio.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	vector<int> V;
	while (true) {
		int temp; cin >> temp;
		if (temp == 42) {
			break;
		}
		V.push_back(temp);
	}
	//sort(V.begin(), V.end());
	for (int i = 0; i < V.size(); ++i) {
		cout << V[i] << endl;
	}
	_getch();

	return 0;
}