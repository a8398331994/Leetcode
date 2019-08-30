#include<iostream>


/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}	
};

class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		if (head == NULL) return head;
		ListNode *pre = NULL;
		ListNode *cur = head;
		ListNode *nex = NULL;
		while (cur != NULL) {
			nex = cur->next;
			cur->next = pre;
			pre = cur;
			cur = nex;
		}
		return pre;
	}
};