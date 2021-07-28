#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int compare(int a, int b) {
	return a > b;
}
int main() {
	string s;
	cin >> s;
	int sum = 0, ten = 0;
	for (int i = 0; i < s.size(); i++) {
		sum += s[i] - '0';
		if (s[i] == '0')	ten = 1;
	}
	if (sum % 3 == 0 && ten == 1) {
		sort(s.begin(), s.end(), compare);
		cout << s;
	}
	else cout << "-1";
	return 0;
}
