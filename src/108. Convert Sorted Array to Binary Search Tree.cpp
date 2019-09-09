#include<vector>
#include<iostream>

using namespace std;


struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		if (nums.size() == 0)
			return NULL;
		int middle = nums.size() / 2;
		TreeNode *root = new TreeNode(nums[middle]);

		cout << nums[middle] << endl;

		vector<int>leftRange(nums.begin(), nums.begin() + middle);
		vector<int>rightRange(nums.begin() + middle + 1, nums.end());

		root->left = sortedArrayToBST(leftRange);
		root->right = sortedArrayToBST(rightRange);

		return root;
		
	}

};

int main()
{
	Solution slu;

	vector<int> console = { -10,-3,0,5,9 };
	slu.sortedArrayToBST(console);

	system("PAUSE");
}