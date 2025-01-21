#include <iostream>;

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
    ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* result = new ListNode();
        ListNode* curr = result;

        while(l1 != NULL || l2 != NULL || carry != 0 ){
            int sum = carry;

            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            curr->next = new ListNode(int (sum % 10));
            curr = curr->next;
        }
        return result->next; /*result is an empty dummy node, the actual list starts from result next*/
    }
};
