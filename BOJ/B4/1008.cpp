#include <iostream>
using namespace std;

int main(){
    double a, b; //소숫점 정밀도 -> int, float 대신 double
    cin >> a >> b;
    cout << fixed; //소숫점 고정
	  cout.precision(16); //소숫점 설정
    cout << a/b;
    return 0;
}
