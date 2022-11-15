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
        ListNode *fast = head, *slow = head;
        bool flag = false;
        while(fast!=nullptr && fast->next!=nullptr){
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow){
                flag =  true;
                break;
            }
        }
        
        if (flag ==false){
            return nullptr;
        }
        //fast = head,slow = head;
        while(head!=slow){
            head = head->next;
            slow = slow->next;
        }
        return slow;
    }
};