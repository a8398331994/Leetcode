#include<iostream>

using namespace std;

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
	void deleteNode(ListNode* node) {
		while (node && node->next) {
			node->val = node->next->val;
			if (node->next->next == nullptr) node->next = nullptr;
			else node = node->next;
		}
	}
};

int main()
{
	/*
	Console
	[4,5,1,9]
	5
	*/


}