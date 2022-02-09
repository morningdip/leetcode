/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        auto fast = head;
        auto slow = head;
        while (fast) {
            if (!fast->next) return nullptr;
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) break;   
        }        
        while (head != fast && fast) {
            head = head->next;
            fast = fast->next;
        }      
        return fast;
    }
};
