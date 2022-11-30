#include <iostream>


using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL){
			return pHead;
		}
		//ListNode* newHead = pHead;
		ListNode* cur = pHead;
		ListNode *pNext;

		while(cur->next) {
			pNext = cur->next;
			cur->next = pNext->next;
			pNext->next = pHead;
			pHead = pNext;

		}
		return pHead;
    }
};


int main( ){

    ListNode* head= new ListNode(-1);
    ListNode* cur = head;

    int tmp;
    while ( cin >> tmp ) {
        ListNode* nNode = new ListNode(tmp);
        cur->next = nNode;
        cur = cur->next;
    }

    ListNode* t = head->next;
    while( t != NULL ){
        cout <<"val: " << t->val << " ";
        t = t->next;
    }
    cout << endl;

    Solution *sol = new Solution();
    ListNode* tt = sol->ReverseList(head->next);

    while( tt != NULL ){
        cout <<"val: " << tt->val << " ";
        tt = tt->next;
    }
    cout << endl;

    return 0;
}