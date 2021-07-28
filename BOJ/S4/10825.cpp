#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

pair<pair<string, int>, pair<int, int>> p[100000];
int compare(pair<pair<string, int>, pair<int, int>> a, pair<pair<string, int>, pair<int, int>> b) {
	if (a.first.second > b.first.second)	return 1;
	else if (a.first.second == b.first.second) {
		if (a.second.first < b.second.first)	return 1;
		else if (a.second.first == b.second.first) {
			if (a.second.second > b.second.second)	return 1;
			else if (a.second.second == b.second.second) {
				if (a.first.first < b.first.first)	return 1;
			}
		}
	}
	return 0;
}
int main() {
	int n;
	cin >> n;;
	for (int i = 0; i < n; i++)	cin >> p[i].first.first >> p[i].first.second >> p[i].second.first >> p[i].second.second;
	sort(p, p + n, compare);
	for (int i = 0; i < n; i++)	cout << p[i].first.first << "\n";
	return 0;
}
