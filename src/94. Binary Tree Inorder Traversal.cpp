#include<iostream>
#include<vector>

using namespace std;

/**
* ref: https://leetcode.com/problems/binary-tree-inorder-traversal/discuss/31232/Three-Methods-to-Solve-(C%2B%2B)
* Another answer 

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
	vector<int> inorderTraversal(TreeNode* root) {
		if (!root)
			return result;
		inorderTraversal(root->left);
		result.push_back(root->val);
		inorderTraversal(root->right);

		return result;
	}
private:
	vector<int> result;
};