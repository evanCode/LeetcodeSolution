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
    ListNode *deleteDuplicates(ListNode *head) {
    ListNode *pos=head,*next=head,*tail=NULL;	//原链处理到的位置，下一个不同元素位置，新链的尾
		head=NULL;
		while(next!=NULL)
		{
			while(next!=NULL&&next->val==pos->val)	//寻找下一个不同的元素
				next=next->next;
			if(next==pos->next)	//下一个元素在本元素之后一个位置，说明本元素是唯一的
			{
				if(head==NULL)	//元素是新链的头
				{
					head=pos;
					tail=head;
				}
				else	//不是新链的头
				{
					tail->next=pos;
					tail=pos;
				}
			}
			pos=next;
		}
		if(tail!=NULL)	//处理尾部
			tail->next=NULL;
		return head;
    }
};
