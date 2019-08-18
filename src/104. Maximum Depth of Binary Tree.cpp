#include<iostream>

using namespace std;

/**
ref: https://skyyen999.gitbooks.io/-leetcode-with-javascript/content/questions/104md.html
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}	
};

class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL)
			return 0;
		int l = maxDepth(root->left), r = maxDepth(root->right);
		return 1 + ((l > r) ? l : r);
	}
};
