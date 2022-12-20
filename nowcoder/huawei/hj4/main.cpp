#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    getline(cin,s );

    int i = 0;
    string tmp= "";
    for(auto ch : s){
        tmp.push_back(ch);
        if (tmp.size() == 8){
            cout << tmp <<endl;
            tmp = "";
        }
    }

    if (tmp.size() != 0) {
        while(tmp.size()< 8){
            tmp+="0";
        }
    }

    cout << tmp <<endl;
    return 0;
}
// 64 位输出请用 printf("%lld")