#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map>

#include <conio.h>

using namespace std;
int n, m;
int XM[] = { -2,-2,-1,+1,+2,+2,+1,-1 };
int YM[] = { -1, +1, +2,+2,+1,-1,-2,-2 };
int XH[] = { -1,-1,-1,0,1,1,1,0 };
int YH[] = { -1,0,1,1,1,0,-1,-1 };

bool valid(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}

int main() {
	freopen("input.txt", "r", stdin);
	int test = 0;
	while (true) {
		test++;
		 cin >> n >> m;
		if (n == 0) {
			break;
		}
		
		map<pair<int, int>, int> quan;
		map<pair<int, int>, int> diQua;
		int nh; cin >> nh;
		vector<pair<int, int>>H;
		for (int i = 0; i < nh; ++i) {
			int xh, yh; cin >> xh >> yh;
			H.push_back(make_pair(xh, yh));
			quan[make_pair(xh, yh)] ++;
		}
		int nm; cin >> nm;
		vector<pair<int, int>> M;
		for (int i = 0; i < nm; ++i) {
			int xm, ym; cin >> xm >> ym;
			M.push_back(make_pair(xm, ym));
			quan[make_pair(xm, ym)] ++;
		}
		int nt; cin >> nt;
		for (int i = 0; i < nt; ++i) {
			int xt, yt; cin >> xt >> yt;
			quan[make_pair(xt, yt)] ++;
		}
		int c = 0;
		for (int i = 0; i < nh; ++i) {
			for (int t = 0; t < 8; ++t) {
				for (int j = 1; ; ++j) {
					int newxh = H[i].first + j * XH[t];
					int newyh = H[i].second + j * YH[t];
					if (valid(newxh, newyh) && quan[make_pair(newxh, newyh)] == 0) {
						if (diQua[make_pair(newxh, newyh)] == 0) {
							c++;
							diQua[make_pair(newxh, newyh)]++;
						}
					}
					else {
						break;
					}
				}
			}
		}
		for (int i = 0; i < nm; ++i) {
			for (int t = 0; t < 8; ++t) {
				int newxm = M[i].first + XM[t];
				int newym = M[i].second + YM[t];
				if (valid(newxm, newym) && quan[make_pair(newxm, newym)] == 0 && diQua[make_pair(newxm, newym)] == 0) {
						c++;
						diQua[make_pair(newxm, newym)]++;
				}
			}
		}
		cout << "Board " << test << " has " << n * m - c - nh - nt - nm << " safe squares." << endl;
	}
	_getch();
	return 0;
}