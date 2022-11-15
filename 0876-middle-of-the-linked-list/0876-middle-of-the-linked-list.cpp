/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast = head, *slow = head;
        
        while (fast!=nullptr && slow!=nullptr){
            if(fast->next!=nullptr)
                fast = fast->next->next;
            else{
                fast = fast->next;
                break;
            }
            slow = slow->next;
        }
        return slow;
    }
};