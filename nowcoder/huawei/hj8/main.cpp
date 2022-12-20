#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
//#include <string>

using namespace std;

int main() {

    int count ;
    cin >> count;

    unordered_map<int, int> mp;

    vector<int> keys;

    int k, val;
    while(count > 0) {
        count--;
        cin >> k >> val;
        if (mp.find(k) == mp.end()){
            mp[k] = val;
            keys.push_back(k);
        } else {
            mp[k] += val;
        }
    }

    sort(keys.begin(), keys.end());

    for(auto i: keys){
        cout << i << ' ' << mp[i] << endl;
    }

    return 0;
}
// 64 位输出请用 printf("%lld")