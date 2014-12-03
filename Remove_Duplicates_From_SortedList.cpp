/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*
  Given a sorted linked list, delete all duplicates such that each element appear only once.
  For example,
  Given 1->1->2, return 1->2.
  Given 1->1->2->3->3, return 1->2->3.
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
       if(head==NULL) return NULL;
       ListNode* prev = head;
       ListNode* curr = prev->next;
       while(prev!=NULL)
       {
             while(curr!=NULL&&(curr->val==prev->val))
            {
                 curr = curr->next;
            }
            prev->next = curr;
            curr = prev->next;
            prev=prev->next;
       }
       return head;
    }
};
