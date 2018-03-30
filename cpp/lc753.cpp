//
//  lc753.cpp
//  
//
//  Created by neil on 3/29/18.
//

#include <stdio.h>
#include <string>
#include <set>


class Solution {
public:
    string crackSafe(int n, int k) {
        if (n == 1 && k == 1) return "0";
        int t = pow(k,n);
        string res(n,'0');
        set<string> s_set;
        s_set.insert(res);
        dfs(n,k,t,s_set,res);
        
        return res;
    }
    
private:
    // assume n is 3. k is 2
    //start at 00+0(exists)->00+1(dfs)->01+0(dfs)->10+0(dfs)->00+0(exists)->00+1->false;
    //false means have visited all edges of current node in a Eular cycle
    // then the first false is in status res=00010, set = 000,001,010, current prv=10, current next = 100,
    
    bool dfs(int n, int k, int t, set<string>& s_set, string &res){
        if(t==s_set.size()) return true;
        //for each time choose the last n-1 characters
        string prev=res.substr(res.size()-n+1, n-1);
        for(int i = 0; i< k; i++){
            string next = prev;
            next.push_back(i + '0');
            if(s_set.find(next)==s_set.end()){
                s_set.insert(next);
                res+=(i + '0');
                if(dfs(n,k,t,s_set,res)) return true;
                else{
                    s_set.erase(next);
                    res.pop_back();
                }
            }
            
        }//end of for
        return false;
    }
};
