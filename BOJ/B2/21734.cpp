#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    for(int i=0; i<s.length(); i++){
        int a, b, c;
        a=s[i]/100;
        b=(s[i]%100)/10;
        c=s[i]%10;
        for (int j=0; j<a+b+c; j++)   cout<<s[i];
        cout<<"\n";
    }
    return 0;
}
