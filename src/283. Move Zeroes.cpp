#include<iostream>
#include <algorithm>    // std::find
#include<vector>

using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int count = 0;
		std::vector<int>::iterator it;
				
		while (true) {
			it = std::find(nums.begin(), nums.end() - count, 0);
			if (it != nums.end() - count) {
				//cout << *it << endl;
				count += 1;
				it = nums.erase(it);
				nums.push_back(0);
			}
			else break;
		}

		/*
		Best solution
		int j = 0;
		// move all the nonzero elements advance
		for (int i = 0; i < nums.size(); i++) {
				if (nums[i] != 0) {
					nums[j++] = nums[i];
				}
			}
			for (;j < nums.size(); j++) {
				nums[j] = 0;
			}
		*/
		
	}
};

int main()
{
	Solution slu;
	vector<int> console = { 0,1,0,3,12 };
	
	slu.moveZeroes(console);

	for (auto n : console) {
		cout << n << " ";
	}

	system("PAUSE");
	return 1;
}