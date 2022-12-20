#include <iostream>
using namespace std;


int helper(int a, int b) {

    int c = a % b;

    while(c != 0) {
        c = a%b;
        a = b;
        b = c;
        c = a % b;
    }

    return b;
}

int main() {
    int a, b;
    cin >> a >>  b ;
    int product = a * b;

    int x = 1;
    if (a >= b) {
       x = helper(a,b);
    } else {
       x = helper(b,a);
    }

    int res = product / x;
    cout << res << endl;

}
// 64 位输出请用 printf("%lld")