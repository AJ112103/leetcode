#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            ListNode* result = new ListNode();
            ListNode* curr = result;

            while(l1 && l2){
                if(l1->val <= l2->val){
                    curr->next = l1;
                    l1 = l1->next;
                    curr = curr->next;
                } else {
                    curr->next = l2;
                    l2 = l2->next;
                    curr = curr->next;
                }
            }

            curr->next = l1 ? l1 : l2;

            return result->next;
    };
};