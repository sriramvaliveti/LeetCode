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
    int n = -1;
    int x = -1;
    bool ans = true;
    ListNode *ptr = nullptr;
    void pal(ListNode* head){
        
        if (ptr == nullptr || !ans ||head == nullptr){
            return ;
        }
        
        pal(head->next);
        n = ptr->val;
        if (!ans)
            return;
        //cout<<n<<" "<<head->val<<" "<<ans<<endl;
        if(n == head->val){
            ptr = ptr->next;
            ans&=true;
            return ;
        }
        else{
            ans = false;
            return ;
        }
        
    }
    bool isPalindrome(ListNode* head) {
        ptr = head;
        pal(head);
        return ans;
    }
};