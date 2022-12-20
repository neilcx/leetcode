#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    int n = s.size();
    char temp;
    for(int i =0; i < n/2; i++) {
        temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }

    cout << s << endl;

    return 0;
}
// 64 位输出请用 printf("%lld")