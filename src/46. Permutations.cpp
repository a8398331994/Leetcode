#include<vector>
#include<iostream>

using namespace std;

/*
ref:https://leetcode.com/problems/permutations/discuss/18282/backtracking-Clean-C%2B%2B-recursion-with-detailed-explanation

*/

class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {

	}
private:
	void DFS(vector<vector<int>>& res, vector<int>& nums, int pos) {
		for (int i = pos; i < nums.size(); i++) {
			swap(nums[pos], nums[i]);
		}
	}
};

int main()
{
	Solution slu;
	vector<int> console = { 1, 2, 3 };
	slu.permute(console);

	system("PAUSE");
}