#include <iostream>
#include <string>

using namespace std;

int main() {

    int res = 0;
    string s1;
    string s2;

    //这种方式如果中间有空格，s1 会缺失后面的内容
    // abc xxx aXY, 将只得到abc.
    //cin >> s1 >> s2;

    getline(cin, s1);
    getline(cin, s2);

    char b = s2[0];


    // 这2种方法都可以
    //int n = s.length();
    //for(int i = 0; i < n; i++) {
    //  char c= s[i];
    for(auto c: s1){
        if (b >= 'a' && b <= 'z') {
            if ( c == b || c == b - 32) {
                res++;
            }
        } else if ( b >= 'A' && b <= 'Z') {
            if ( c == b || c == b + 32) {
                res++;
            }
        } else {
            if ( c == b ) {
                res++;
            }
        }
    }

    cout << res <<endl;
    return 0;
}
