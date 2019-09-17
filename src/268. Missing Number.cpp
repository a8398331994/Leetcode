#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		//if (nums.size() == 0)
		//	return -1;
		//else if (nums.size() == 1) 
		//	return abs(nums[0] - 1);
		//
		//sort(nums.begin(), nums.end());
		//for (int i = 1; i < nums.size(); i++) {
		//	if (nums[i] - nums[i - 1] != 1) {
		//		return (nums[i] + nums[i - 1]) / 2;
		//	}			
		//}

		//if (nums.front() == 0)
		//	return nums.size();
		//else
		//	return 0;

		/*Best solution 1*/
		//int sum = 0; int n = nums.size();
		//for (int i = 0; i < nums.size(); i++) {
		//	sum += nums[i];
		//}
		//return 0.5 * n * (n + 1) - sum;

		/*Best solution 2*/
		//int res = 0;
		//for (int i = 0; i < nums.size(); ++i) {
		//	res ^= (i + 1) ^ nums[i];
		//}
		//return res;
	}

	
};

int main()
{
	Solution slu;
	vector<int>console = { 3,0,1 };
	cout << slu.missingNumber(console) << endl;

	system("PAUSE");
}