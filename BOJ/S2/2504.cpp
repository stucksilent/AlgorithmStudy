#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string in;
    stack<char> st;
    cin >> in;

    int ans = 0, value = 1;
    bool impossible = false;
    for (int i = 0; i < in.size(); i++) {
        if (in[i] == '(') {
            value *= 2;
            st.push('(');
        }
        else if (in[i] == '[') {
            value *= 3;
            st.push('[');
        }
        else if (in[i] == ')' && (st.empty() || st.top() != '(')) {
            impossible = true;
            break;
        }
        else if (in[i] == ']' && (st.empty() || st.top() != '[')) {
            impossible = true;
            break;
        }
        else if (in[i] == ')') {
            if (in[i - 1] == '(')    ans += value;
            st.pop();
            value /= 2;
        }
        else if (in[i] == ']') {
            if (in[i - 1] == '[')    ans += value;
            st.pop();
            value /= 3;
        }
    }
    if (impossible || !st.empty())   cout << 0;
    else cout << ans;
    return 0;
}
