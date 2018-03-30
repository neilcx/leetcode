//
//  lc732.cpp
//  
//
//  Created by neil on 3/29/18.
//

#include <stdio.h>



class MyCalendarThree {
    
private:
    map<int,int> book_map;
    
public:
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        int max_book = 0;
        int book_num = 0;
        book_map[start]++;
        book_map[end]--;
        
        for(auto key:book_map){
            book_num +=key.second;
            max_book = max(book_num, max_book);
        }
        return max_book;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree obj = new MyCalendarThree();
 * int param_1 = obj.book(start,end);
 */
