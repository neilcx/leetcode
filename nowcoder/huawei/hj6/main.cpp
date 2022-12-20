#include <iostream>
#include <vector>
//#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    int n ;
    cin  >> n;
    int tmp;
    vector<int> res;
    set<int> numSet;
    //unordered_map<int,int> mp;

    while ( n > 0 ){
        cin >> tmp;
        n--;
        numSet.insert(tmp);
    }
    for (auto i: numSet) {
        res.push_back(i);
    }
    sort(res.begin(), res.end());

    for(auto i: res){
        cout << i << endl;
    }

}
