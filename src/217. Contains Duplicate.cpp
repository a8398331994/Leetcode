#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_map<int, int> temp;

		for (int i = 0; i < nums.size(); i++) {
			temp[nums[i]]++;
			if (temp[nums[i]] > 1)
				return true;
		}
		return false;

		/*Another solution, this solution cost O(nlogn)*/
		//return nums.size() > set<int>(nums.begin(), nums.end()).size();
	}
};