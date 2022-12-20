#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int i;
    int n;
    int res;
    int digit;
    char ch;

    string hexNum;

    while(getline(cin, hexNum)){

        res = 0;
        //reverse(hexNum.begin(), hexNum.end());
        int n = hexNum.size();

        for( i =2; i < n; i++){
            ch = hexNum[i];
            if ( ch >= '0' && ch <= '9') {
                digit = ch -'0';
            }
            if (ch >= 'A' && ch <= 'F' ) {
                digit = ch - 'A' + 10;
            }
            res = res*16 + digit;
        }

        cout << res << endl;


    }

    return 0;
}
// 64 位输出请用 printf("%lld")