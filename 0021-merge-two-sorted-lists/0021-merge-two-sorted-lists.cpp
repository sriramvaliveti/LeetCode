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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode ret;
        ListNode *head,*curr;
        head = &ret;
        curr = &ret;
        cout<<head->val<<" ";
        ListNode *p1=list1,*p2=list2;
        while (p1!=nullptr && p2!=nullptr){
            //cout<<"here";
           
            if (p1->val<=p2->val){
               // cout<<"here";
                ListNode *temp = new ListNode(p1->val);
                curr->next = temp;
                p1 = p1->next;
            }
            else{
                ListNode *temp = new ListNode(p2->val);
                curr->next = temp;
                p2 = p2->next;
            }
            curr = curr->next;
        }
        while (p1!=nullptr){
           ListNode *temp = new ListNode(p1->val);
            curr->next = temp;
            p1 = p1->next;
            curr = curr->next;
        }
        while (p2!=nullptr){
            ListNode *temp = new ListNode(p2->val);
            curr->next = temp;
            p2 = p2->next;
            curr = curr->next;
        }
        curr->next = nullptr;
        //cout<<head->next->next->next->next->next->next->next->next<<"\n";
        return head->next;
    }
};