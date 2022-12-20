#include <iostream>
using namespace std;

int main() {

    float num;

    cin >> num;

    int n = 0;

    while(num > 1) {
        n++;
        num = num - 1;
    }

    if ((double)num - 0.5 >= 0.0) {
        n = n + 1;
    }

    cout << n  << endl;

    return 0;

}
// 64 位输出请用 printf("%lld")