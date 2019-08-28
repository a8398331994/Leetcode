#include<vector>
#include<iostream>

using namespace std;

/*
ref:https://leetcode.com/problems/permutations/discuss/18282/backtracking-Clean-C%2B%2B-recursion-with-detailed-explanation

*/

class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>>res;
		DFS(res, nums, 0);
		return res;
	}
private:
	void DFS(vector<vector<int>>& res, vector<int>& nums, int pos) {
		if (pos == nums.size() - 1) {
			//for (auto n : nums)
				//cout << n << " ";
			res.push_back(nums);
			//cout << ", Size: " << res.size() << endl;			
			return;
		}
		for (int i = pos; i < nums.size(); i++) {
			swap(nums[pos], nums[i]);
			DFS(res, nums, pos + 1);
			swap(nums[pos], nums[i]);
		}
	}
};

int main()
{
	Solution slu;
	vector<int> console = { 1, 2, 3 };
	vector<vector<int>>res = slu.permute(console);

	system("PAUSE");
}