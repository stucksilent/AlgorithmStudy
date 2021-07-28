#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[20];
	for (int i = 1; i <= 20; i++) arr[i-1] = i;
	for (int i = 0; i < 10; i++) {
		int a, b;
		cin >> a >> b;
		reverse(arr + a - 1, arr + b);
	}
	for (int i = 0; i < 20; i++)	cout << arr[i] << " ";
	return 0;
}
