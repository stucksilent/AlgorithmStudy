#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;

	string result = "~";
	for (int i = 0; i < s.size() - 2; i++) {
		for (int j = i + 1; j < s.size() - 1; j++) {
			string scopy = s;
			reverse(scopy.begin(), scopy.begin() + i + 1);
			reverse(scopy.begin() + i + 1, scopy.begin() + j + 1);
			reverse(scopy.begin() + j + 1, scopy.end());
			result = min(result, scopy);
		}
	}
	cout << result;
	return 0;
}
