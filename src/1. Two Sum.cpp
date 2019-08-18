#include <vector>
#include <iostream>
#include <algorithm>    // std::sort

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		int index = 0;
		int k, first, second;
		vector<int> result;

		while (index < nums.size()) {
			k = index + 1;
			first = nums[index];
			while (k < nums.size()) {
				second = nums[k];
				if (first + second == target) {
					result.push_back(index);
					result.push_back(k);
					return result;
				}
			}
		}
		return result;
	}
};

vector<int>nums = { 2,7,11,15 };
int target = 9;

int main()
{
	Solution sol;

	vector<int> result;
	result = sol.twoSum(nums, target);

	for(int r:result)
		cout << r << endl;

	system("PAUSE");
	return 1;
}

/*
Best Solution

vector<int> answers;`
//i represents the position of the first number
for (int i=0; i<nums.size()-1; i++){
//j represents the position of the second number
for (int j=i+1; j<nums.size(); j++){
// if the sum of the two numbers are equal to each other
if (nums[i] + nums[j] == target){
//add the numbers to the vector we created
answers.push_back(i);
answers.push_back(j);
return answers;
}
}
}
return answers;
*/