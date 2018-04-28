#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	while (true) {
		int col; cin >> col;
		if (col == 0) {
			_getch();
			return 0;
		}
		string str; cin >> str;
		vector<string> V;
		for (int i = 0; i < str.length() / col; ++i) {
			V.push_back("");
			for (int j = 0; j < col; ++j) {
				V[i].push_back(str[i*col + j]);
			}
		}
		for (int i = 1; i < V.size(); i += 2) {
			for (int j = 0; j < V[i].length() / 2; ++j) {
				swap(V[i][j], V[i][V[i].length() - 1 - j]);
			}
		}
		string res = "";
		for (int i = 0; i < col; ++i) {
			for (int j = 0; j < V.size(); ++j) {
				res.push_back( V[j][i]);
			}
		}

		cout << res << endl;
	}
	return 0;
}