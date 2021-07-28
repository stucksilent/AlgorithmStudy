#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	queue<int> q;
	
	int temp = 1;
	for (int i = 0; i < n; i++)	q.push(i);
	cout << "<";
	while (q.size()>1) {
		if (temp % k == 0) {
			cout << q.front() + 1 << ", ";
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
		temp++;
	}
	cout << q.front() + 1 << ">";
	return 0;
}
