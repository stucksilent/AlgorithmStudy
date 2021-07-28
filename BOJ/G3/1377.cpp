#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//버블소트가 어디서 멈추는지
int n;
int main() {
    cin >> n;
    vector<pair<int, int>> v(n); //<숫자, 인덱스> 
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    //해당 숫자에 저장되어있는 인덱스와 정렬 기준 인덱스를 뺀 값이 (좌측으로 이동한 횟수 - 1)
    //이렇게 구한 값의 최대+1 출력
    int ans = 0;
    for (int i = 0; i < n; i++)   ans = max(ans, v[i].second - i);
    cout << ans + 1;
	return 0;
}
